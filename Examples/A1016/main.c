/** @file main.c
 *  @brief Check Prime Number
 *
 *  This program gets a number from user and
 * 	checks whether it is prime or not.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 03/06/2023
 */

#include <stdio.h>

int checkPrime(int number)
{
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = checkPrime(number);

    if (result == 0) {
        printf("%d is a prime number!\n", number);
    } else {
        printf("%d is NOT a prime number!\n", number);
    }

    return 0;
}
