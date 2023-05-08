/** @file main.c
 *  @brief Finding Reverse of an Integer
 *
 *  This program gets a positive integer from user
 * 	and prints its reverse to the screen.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int reverse = 0;

    for (int temp = number; temp > 0; temp /= 10) {
        reverse *= 10;
        reverse += temp % 10;
    }

    printf("Reverse of the number: %d", reverse);

    return 0;
}
