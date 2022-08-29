/** @file main.c
 *  @brief The Volume and Surface Area of a Cube
 *
 *  This program gets a one side length of a cube from user and prints
 *  volume and surface area of that cube to the screen.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    long side;
    printf("One side of the cube: ");
    scanf("%ld", &side);
    
    long volume = side * side * side;
    printf("Volume of the cube: %ld\n", volume);
    
    long surface_area = 6 * (side * side);
    printf("Surface area of the cube: %ld\n", surface_area);

    return 0;
}