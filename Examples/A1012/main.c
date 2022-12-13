/** @file main.c
 *  @brief printf Format Specifiers
 *
 *  printf Format Specifiers
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

main()
{
    char a= 'A';
    short b= 32000;
    int c= 234;
    long d= 2000000000;
    float e= 1.34534;
    double f= 12.124312;
    long double g= -30.2134123412;
    
    printf("%c \n", a);
    printf("%hd \n", b);
    printf("%d \n", c);
    printf("%ld \n", d);
    printf("%f \n", e);
    printf("%f \n", f);
    printf("%lf \n", g);
    
    return 0;      
}
