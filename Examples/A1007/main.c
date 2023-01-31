/** @file main.c
 *  @brief Check Leap Year
 *
 *  In this program, it is checked whether the year information entered
 *  is a leap year.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>
#include <stdbool.h> /* Added with C99 */

int main()
{
    bool isLeap = false;
    unsigned int year;

    /* Get year info from user. */
    printf("Please enter a year: ");
    scanf("%d", &year);

    /* Check year is leap or not. */
    if (year % 400 == 0) {
        isLeap = true;
    } else if (year % 100 == 0) {
        isLeap = false;
    } else if (year % 4 == 0) {
        isLeap = true;
    }

    /* Print result with respect to Boolean value. */
    if (isLeap) {
        printf("%u is a leap year!", year);
    } else {
        printf("%u is NOT a leap year!", year);
    }

    return 0;
}
