/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//wap to find sum of middle two digit in 4 digit num

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    // variable decleration
    int a,x,y,s,t,sum;
    
    //input from user
    printf ("enter 4 digit number");
    scanf ("%d",&a);
    
    // calculations
    x = a/100;
    y = a%100;
    s = x%10;
    t = y/10;
    sum = s+t;
    
    //result
    printf ("sum of middle two digit of 4 digit number is = %d",sum);
    getch();
}
