/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
/******************************************************************************
* Siddhartha Shrestha
* C-programming
* Program 2
* 
* Program to find sum of first and last digit in 4 number
* 
*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    // variable decleration
    int number, thousands, hundred_remainder, hundredth, tens_remainder, tens, ones_remainder, sum;
    
    //input from user
    printf ("enter 4 digit number: \n");
    scanf ("%d", &number); // 1234
    
    // calculations Sample run : 1234
    thousands = number / 1000; //1                                   Int/Int = Int D/I= D I/D =D
    hundred_remainder = number % 1000; // 234
    hundredth = hundred_remainder / 100; // 2
    tens_remainder = hundred_remainder % 100; // 34
    tens = tens_remainder / 10;  // 3
    ones_remainder = tens_remainder % 10; //4
    sum = thousands + ones_remainder; // 1 + 4 = 5
    
    //result
    printf ("sum of first and last digit of 4 digit number is = %d",sum);
    getch();
}
