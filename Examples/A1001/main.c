/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Değişken Tanımlama
*/

#include<stdio.h>

int main()
{
    char a='A'; // [signed] char
    // unsigned char a='A';
    short b=32000; // [signed] short, short [int], [signed] short [int]
    // unsigned short b=3242;
    int c=234; // [signed] int, signed
    // unsigned int c=20; veya unsigned c=40;
    long d=2000000000; // [signed] long, long [int], [signed] long [int]
    // unsigned long d=734676; veya unsigned long [int]
    float e=1.34534;
    double f=12.124312;
    long double g=-30.2134123412;

    int ilk, iki, uc, dort; // Aynı veri türünden isimler bu şekilde tanımlanabilirler.

    printf("%c \n", a);
    printf("%hd \n", b);
    printf("%d \n", c);
    printf("%ld \n", d);
    printf("%f \n", e);
    printf("%f \n", f);
    printf("%lf \n", g);

    return 0;
}
