/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//wap to find sum of first and last digit in 4 number

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    // variable decleration
    int x,a,s,t,y,r,r2,sum;
    
    //input from user
    printf ("enter 4 digit number");
    scanf ("%d",&a);
    
    // calculations
    x = a/1000;
    r = a%1000;
    s = r/100;
    r2 = r%100;
    t = r2/10;
    y = r2%10;
    sum = x+y;
    
    //result
    printf ("sum of first and last digit of 4 digit number is = %d",sum);
    getch();
}
