/** @file main.c
 *  @brief Calculating the Average Grade of a Class
 *
 *  This program takes grade values from user and prints
 *  average grade value to the screen.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int sum = 0;
    int counter = 0;
    
    int grade;
    printf("Enter grade (enter -1 for end): ");
    scanf("%d", &grade);

    while (grade != -1) {
        sum += grade;
        counter += 1;

        printf("Enter grade (enter -1 for end): ");
        scanf("%d", &grade);
    }

    if (counter != 0) {
        float average = (float)sum / counter;
        printf("Average grade of the class: %.2f\n", average);
    } else {
        printf("No grade value entered!\n");
    }

    return 0;
}
