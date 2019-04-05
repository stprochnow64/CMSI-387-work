#include <unistd.h>
#include <stdio.h>
//#include <iostream>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
//using namespace std;

int main() {
  pid_t returnedValue = fork();

  if(returnedValue < 0){
    perror("error forking");
    return -1;
  } else if (returnedValue == 0){

    if(close(STDOUT_FILENO) < 0){
      perror("error closing standard output");
      return -1;
    }
    // When there is no error, open returns the smallest file
    // descriptor not already in use by this process, so having
    // closed STDOUT_FILENO, the open should reuse that number.
    if(open("/etc/passwd", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR) < 0) {
      perror("error opening /etc/passwd");
      return -1;
    }
    execlp("tr", "tr", "a-z", "A-Z", NULL);  // tr with A-Z and a-z letters
    perror("error executing tr");
    return -1;
  } else {

    if(waitpid(returnedValue, 0, 0) < 0){
      perror("error waiting for child");
      return -1;
    }
    printf("Note the parent still has the old standard output.");
  }
}
