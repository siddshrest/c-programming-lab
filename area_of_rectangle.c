/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{

    // Variable decleration
    int l , b , a , p;
    
    // Take input from the user
    printf("enter length and breadth");
    scanf("%d,%d",&l,&b);
    
    // Calculation
    a = l*b;
    p = 2*(l+b);
    
    //show result
    printf("area = %d \n", a);
    printf("perimeter = %d", p);
}


