/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  //varaiable decleration
  
    float a,b;
  // take input from user
    printf ("enter a num");
    scanf ("%f",&a);
  
  //calculations
  
    b = sqrt(a);
  
  //show results
    printf("sq root is %f",b);
    getch();
}
