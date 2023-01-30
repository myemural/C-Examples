/** @file main.c
 *  @brief Finding Area of a Circle
 *
 *  This example shows how to calculate area of a circle with
 *  given radius value. In this example you can see how we can
 *  use literals in C.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

#define PI 3.14159265  /* double literal */

int main()
{
    char area_char = 'A'; /* character literal */
    int radius;
    
    printf("Enter a radius value: ");
    scanf("%d", &radius);
    
    printf("%c = %f\n", area_char, PI * radius * radius);
}
