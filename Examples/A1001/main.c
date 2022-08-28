/** @file main.c
 *  @brief Printing Different Types of Variables
 *
 *  This program prints different types of variables like character, integer or
 *  floating point to the screen. You can see different format specifiers which
 *  using in "printf" function.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
    char char_value = 'A'; /* [signed] char */
    unsigned char unchar_value = 'A';
    short short_value = -450; /* [signed] short, short [int], [signed] short [int] */
    unsigned short unshort_value = 3242;
    int int_value  = 234; /* [signed] int, signed */
    unsigned int unint_value = 20; /* unsigned */
    long long_value = 2000000000L; /* [signed] long, long [int], [signed] long [int] */
    unsigned long unlong_value = 734676; /* unsigned long [int] */
    float float_value = 1.34534;
    double double_value = 12.124312;
    long double long_double_value = -30.2134123412;

    printf("%c \n", char_value);
    printf("%hi \n", short_value);
    printf("%hu \n", unshort_value);
    printf("%d \n", int_value);
    printf("%i \n", unint_value);
    printf("%u \n", unint_value);
    printf("%ld \n", long_value);
    printf("%lu \n", unlong_value);
    printf("%f \n", float_value);
    printf("%lf \n", double_value);
    printf("%Lf \n", long_double_value);

    return 0;
}
