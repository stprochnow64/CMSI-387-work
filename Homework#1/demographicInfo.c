#include <string.h>
#include <stdio.h>

int main( int argc, char ** argv ) {
  char name[37];
  int age;
  int class_year;
  char major[37];
  char hometown[37];
  char mood[37];

  printf("What is your name? ");
  scanf("%s", name);

  printf("How old are you? ");
  scanf("%d", &age);

  printf("What is your class year? ");
  scanf("%d", &class_year);

  printf("What is your major? ");
  scanf("%s", major);

  printf("Where are you from? ");
  scanf("%s", hometown);

  printf("How are you feeling today? ");
  scanf("%s", mood);

  printf("\nName: %s \nAge: %d \nClass Year: %d \nMajor: %s \nHometown: %s\nMood: %s\n", name, age, class_year, major, hometown, mood);
}
