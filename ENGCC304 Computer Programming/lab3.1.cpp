//Lab 3.1-017-4
#include <stdio.h>

int main() {
    float W = 0 ;
    float H = 0 ;
    float area = 0 ;
    
    
    printf( "Triangle area calculation program\n" ) ;
    printf( "Enter Width: " ) ;
    scanf( "%f", &W) ;
    printf( "Enter Height: " ) ;
    scanf( "%f", &H ) ;
   
    area = W*H/2;
    
    printf( "Area = %.3f\n", area ) ;
    
}//end main function