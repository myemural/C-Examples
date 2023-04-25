/** @file main.c
 *  @brief Generate a Multiplication Table
 *
 *  This program prints multiplication table between
 *  1 and 10 (inclusive) numbers.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    printf("     1   2   3   4   5   6   7   8   9  10\n");
    printf("   ---------------------------------------\n");
    for (int i = 1; i <= 10; ++i) {
        printf("%2d|", i);
        for (int j = 1; j <= 10; ++j) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
    
    return 0;      
}