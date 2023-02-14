
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// c to find area of circle0
#include <stdio.h>

void main()
{
    //varaiable decelartion
    float r,a,c;
    
    // Take input from the user
    printf ("enter radius");
    scanf("%f",&r);
    
    // Calculation
    a = 3.14*r*r;
    c = 2*3.13*r;
   
    // Show the results
    printf("area = %f \n circumference = %f",a,c);
}

