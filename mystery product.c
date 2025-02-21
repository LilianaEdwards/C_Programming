#include <stdio.h>

 unsigned int mystery( unsigned int a, unsigned int b ); // function prototype

 // function main begins program execution 
 int main( void )
 {
 unsigned int x; // first integer
 unsigned int y; // second integer
 
 printf( "%s", "Enter two positive integers: " );
 scanf( "%u%u", &x, &y );

 printf( "The result is %u\n", mystery( x, y ) );
 } // end main

 // Parameter b must be a positive integer
 // to prevent infinite recursion
 unsigned int mystery( unsigned int a, unsigned int b )
 { 
 // base case
 if ( 1 == b ) {
 return a;
 } // end if
 else { // recursive step
 return a + mystery( a, b - 1 );
 } // end else
 } // end function mystery
