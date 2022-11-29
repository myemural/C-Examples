/** @file main.c
 *  @brief Literals
 *
 *  This shows working mechanism of number literals.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
    long a=450L; /* long */

    char b='A';
    char c='\n';
    char d='\x41';
    char e='\123';

    int f=3456U; /* unsigned int */
    long g=30578LU; /* unsigned long */

    int j = 0113; /* Base 8 */
    int k = 0x4b; /* Base 16 */

    float x=1.6F;
    double y=25.6;

    float z=1.34E-2f; /* Scientific notation */

    printf("%ld \n", a);
    printf("%c \n", b);
    printf("%c", c);
    printf("%c \n", d);
    printf("%c \n", e);
    printf("%d \n", f);
    printf("%ld \n", g);
    printf("%d \n", j);
    printf("%d \n", k);
    printf("%f \n", x);
    printf("%f \n", y);
    printf("%lf \n", z);

    return 0;
}
