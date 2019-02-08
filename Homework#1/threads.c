#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

static void *second(void *ignored){
    while(1) {
        sleep(5);
        printf("Hello world, I'm a thread!\n");
    }
    return NULL;
}

int main(int argc, char *argv[]){
   pthread_t second_thread;
   int code;
   code = pthread_create(&second_thread, NULL, second, NULL);
   if(code){
      fprintf(stderr, "pthread_create failed with code %d\n", code);
   }
   char user_input[100];
   scanf("%s", user_input);
   int code2;
   code2 = pthread_cancel(second_thread);
   if (code2 == 0){
       printf("Second thread has been killed. Do you copy? RIP. Over and out.\n");
   }
   return 0;
}
