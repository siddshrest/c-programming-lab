/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C program to find the square of a number
#include <stdio.h>
#include <math.h>

int main()
{
    // Variable decleration
    double a;
    
    // Take input from the user
    printf ("enter a number");
    scanf("%lf",&a);
    
    // Calculation
    double result = pow(a,2); //3*3 or 4*4
    
    // Show the results
    printf("power = %lf", result);
    
    // Return success
    return 0;
    // 1. square root, 2. area and circumfrance of circle, 3. a n p of rectangle, 4. time in s/m/h
}
