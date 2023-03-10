/******************************************************************************
* Siddhartha Shrestha
* C-programming
* Program 2
* 
* Program to find sum of first and last digit in 4 number
* Sum of first two and last two 1234 = 12 + 34 = 46
* 1234 / 100 = 12 , 1234 % 100 = 34,,, 12 + 34 
* 12%2 = 2  34/3 = 3 , 2+3 = 5 Once you understand the MATHS behind the program you can do any program
*******************************************************************************/

#include <stdio.h>
void main()
{
    // Varibale decleration
    int pen, book;
    float pen_price, book_price, pen_cost, book_cost, sub_total, tax, total;
    pen_price = 0.50;
    book_price = 1.00;
    
    // Prompt for the pen
    printf ("Enter the no of pens:\t");
    scanf("%d", &pen);
    
    // Prompt for the notebook
    printf ("Enter the no of notebook:\t");
    scanf("%d", &book);
    
    // Calculation
    pen_cost = pen_price * pen; 
    book_cost = book_price * book; 
    sub_total = pen_cost + book_cost; 
    tax = sub_total * 0.055;
    total = sub_total + tax; 
    
    // Show results
    printf ("\nPens = $ %f \n", pen_cost);
    printf ("Notebook = $ %f \n \n", book_cost);
    
    printf ("Subtotal = $ %f \n", sub_total);
    printf ("Sales tax = $ %f \n \n", tax);
    
    printf ("Grand Total = $ %f", total);
    
    // Program ends
}
