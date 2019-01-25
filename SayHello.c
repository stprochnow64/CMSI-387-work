#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {

    char* name;
    char input[25];
    printf( "Enter your name: " );
    name = ( gets( input ) );
    printf( "Hello, %s \n", input) ;
    exit( 0 );
}
