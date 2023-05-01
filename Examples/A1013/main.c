/** @file main.c
 *  @brief Check Whether a Number is an Armstrong Number
 *
 *  This program gets a number from user and checks whether this
 *  number is an Armstrong Number or not.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    int digit_count = 0;

    /* Find digit count */
    while (temp > 0) {
        digit_count++;
        temp /= 10;
    }
    
    int sum = 0;
    temp = number;

    /* Find summation which respect to digit count without using 
       any mathematical library functions. */
    for (; temp > 0; temp /= 10) {
        int current_digit = temp % 10;
        int current_power = 1;
        for (int i = digit_count; i > 0; --i) {
            current_power *= current_digit;
        }
        
        sum += current_power;
    }
    
    if (sum == number) {
        printf("It is an Armstrong Number!\n");
    } else {
        printf("It is NOT an Armstrong Number!\n");
    }

    return 0;
}
