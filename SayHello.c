#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {

    char* name;
    char input[25];
    printf( "Enter your name: " );
    name = ( gets( input ) );
    printf( "/n Hello, %s", input) ;
    exit( 0 );
}
