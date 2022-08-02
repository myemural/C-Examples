/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Rakamsal Özellikler
*/

#include<stdio.h>

int main()
{
    long a=450L;

    char b='A';
    char c='\n';
    char d='\x41';
    char e='\123';

    int f=3456U;
    long g=30578LU;

    int j = 0113; // 8'lik
    int k = 0x4b; // 16'lık

    float x=1.6F;
    double y=25.6;

    float z=1.34E-2f;

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
