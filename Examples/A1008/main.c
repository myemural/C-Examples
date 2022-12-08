/** @file main.c
 *  @brief Arithmetic Operators
 *
 *  Arithmetic Operators
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    int x = 10;
    int y = x + 2;
    
    printf("%d\n", y);
    
    int a = -5;
    int b = a - 5;
    
    printf("%d\n", b);
    
    int c = 15 % 4;
    
    printf("%d\n", c);
    
    short d = 3;
    d++;
    
    printf("%d\n", d);
    
    return 0;      
}
