/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Temel Veri Türleri (Basic Data Types)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a='A';
    short b=32000;
    int c=234;
    long d=2000000000;
    float e=1.34534;
    double f=12.124312;
    long double g=-30.2134123412;

    printf("%c \n", a);
    printf("%hd \n", b);
    printf("%d \n", c);
    printf("%ld \n", d);
    printf("%f \n", e);
    printf("%f \n", f);
    printf("%lf \n", g);

    return 0;
}

/*
TAMSAYI VERİ TÜRLERİ(INTEGER TYPES):

1) signed char: "-128" ile 127 arasında değerler alır. 1 byte uzunluğundadır.
2) unsigned char: "0" ile "255" arasında değerler alır. 1 byte uzunluğundadır.

3) signed short int: "-32.768" ile "32.767" arasında değerler alır. 2 byte uzunluğundadır.
4) unsigned short int: "0" ile "65.535" arasında değerler alır. 2 byte uzunluğundadır.

5) signed int: Bazen "-32.768" ile "32.767", bazen de "-2.147.483.648" ile "2.147.483.647" arasında değerler alır. 2-4 byte uzunluğundadır.
6) unsigned int: Bazen "0" ile "65.535", bazen de "0" ile "4.294.967.296" arasında değerler alır. 2-4 byte uzunluğundadır.

7) long int: "-2.147.483.648" ile "2.147.483.647" arasında değerler alır. 4 byte uzunluğundadır.
8) unsigned long int: "0" ile "4.294.967.296" arasında değerler alır. 4 byte uzunluğundadır.

GERÇEK SAYI TÜRLERİ(FLOATING TYPES):

1) float: "1.17 x 10 üzeri -38 (6 basamak hassasiyet)" ile "3.40 x 10 üzeri 38" arasında değerler alır. 4 byte uzunluğundadır.
2) double: "2.22 x 10 üzeri -308 (15 basamak hassasiyet)" ile "1.17 x 10 üzeri -38 (15 basamak hassasiyet)" arasında değerler alır. 8 byte uzunluğundadır.
3) long double: Taşınabilir değildir ve 10 byte uzunluğundadır.
*/
