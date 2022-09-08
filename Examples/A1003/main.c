/** @file main.c
 *  @brief Temperature Convertor
 *
 *  This program gets temperature value in Celsius unit and 
 *  converts it to Kelvin and Fahrenheit.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
    float celsius;

    printf("Enter temperature in C: ");
    scanf("%f", &celsius);

    double kelvin = (double)(celsius + 273.15f);
    double fahrenheit = (double)((celsius * (9.0f / 5.0f)) + 32.0f);
    
    printf("Temperature in Kelvin: %.2lf K\n", kelvin);
    printf("Temperature in Fahrenheit: %.2lf F", fahrenheit);
    
    return 0;
}