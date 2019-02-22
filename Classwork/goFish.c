#include <string.h>
#include <stdio.h>

int main( int argc, char * argv[] ) {
  
  int number;
  int nums[25];
  int sum = 0;
  int count = 0;
  int sevenCount = 0;
  int i = 0;
  
  while (1) {
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == -9999) {
      break;
    }
    nums[i] = number;
    sum += nums[i];
    count++;
    if (nums[i] == 7) {
      sevenCount++;
    }
    i++;
  }
  
  printf( "\nThe sum of the elements is %d\n", sum );
  printf( "The average is %f\n", (double)sum/count );
  for (int a = 0; a < count; a++) {
    printf( "%d", nums[a]);
  }
  printf( "\nThe seven count is %d\n\n", sevenCount );

}
