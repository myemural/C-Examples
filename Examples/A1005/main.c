/** @file main.c
 *  @brief Check Whether a Number is Positive or Negative or Zero
 *
 *  This program checks whether a number is positive, negative or zero 
 *  and uses comparison operators for this.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
    int value;

    printf("Put an integer value: ");
    scanf("%d", &value);

    if (value < 0) {
        printf("%d is negative\n", value);
    } else if (value > 0) {
        printf("%d is positive\n", value);
    } else if (value == 0) {
        printf("%d is zero\n", value);
    }

    return 0;
}
