/** @file main.c
 *  @brief TBD
 *
 *  TBD
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
    int i = 0;
    
    while (1) {
        printf("%d\n", i);
        i++;
    
        if (i == 10) {
            break;
        }
    }
    
    return 0;
}
