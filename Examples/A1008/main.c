/** @file main.c
 *  @brief Sum of Even Numbers from 0 to N
 *
 *  It is a program that gives the sum of even numbers 
 *  from 0 to N (including N) received from the user.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int N;
    int counter = 0;
    unsigned long sum = 0;

    printf("Give a positive number: ");
    scanf("%d", &N);

    counter = N;

    while (counter != 0) {
        if (counter % 2 == 0) {
            sum += counter;
        }

        counter--;
    }

    printf("Sum of even numbers from 0 to %d is: %lu", N, sum);
    
    return 0;      
}
