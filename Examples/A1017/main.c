/** @file main.c
 *  @brief Convert Binary Number to Decimal
 *
 *  This program gets a binary number from user and
 * 	converts it to decimal number.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 03/06/2023
 */

#include <stdio.h>
#include <math.h>

int convertToDecimal(long long number)
{
    long long temp = number;
    int result;
    int i;

    while (temp != 0) {
        int rem = temp % 10;
        result += rem * pow(2, i);
        ++i;
        temp /= 10;
    }
    
    return result;
}

int main()
{
    long long number;

    printf("Enter a binary number: ");
    scanf("%lld", &number);

    int result = convertToDecimal(number);

    printf("Decimal: %d\n", result);

    return 0;
}
