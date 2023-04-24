/** @file main.c
 *  @brief Check Whether a Number is a Palindrome
 *
 *  This program takes a number from user and checks
 *  whether this number is a palindrome or not.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int number, temp;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;

    // Reverse the number
    int remained, reversed = 0;
    while(number > 0)
    {
        remained = number % 10;
        reversed = (reversed * 10) + remained;
        number = number / 10;
    }

    // Check number is a palindrome
    if(temp == reversed)
    {
        printf("The number %d is a palindrome!", temp);
    }
    else
    {
        printf("The number %d is not a palindrome!", temp);
    }
      
    return 0;
}
