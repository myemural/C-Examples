/** @file main.c
 *  @brief Check the Number is Divisible by 3 and 5
 *
 *  In this program, a number is taken from the user and it is
 *  checked whether it is divisible by 3 and 5.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int number;

    /* Get number from user. */
    printf("Put a number: ");
    scanf("%d", &number);

    /* Check number and print result. */
    if ((number % 3 == 0) && (number % 5 == 0)) {
        printf("%d is divisible by 3 and 5!", number);
    } else {
        printf("%d is not divisible by 3 and 5!", number);
    }

    return 0;
}
