/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: printf T�r Karakterleri
*/

#include <stdio.h>

main()
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
%d: "int" t�r�n� desimal sistemde yazar.
%ld: "long" t�r�n� desimal sistemde yazar
%x: "unsigned int" t�r�n� hexadecimal sistemde yazar.
%X:	"unsigned int" t�r�n� hexadecimal sistemde yazar.(semboller b�y�k harfle)
%lx: "unsigned long" t�r�n� hexadecimal sistemde yazar.
%u: "unsigned int" t�r�n� decimal sistemde yazar.
%o: "unsigned int" t�r�n� oktal sistemde yazar.
%f: "float" ve "double" t�rlerini desimal sistemde yazar.
%lf: "double" t�r�n� desimal sistemde yazar.
%e: ger�ek say�lar� �stel bi�imde yazar.
%c: "char" veya "int" t�r�n� karakter g�r�nt�s� olarak yazd�r�r.
%s: "string" olarak yazd�r�r.
%lf: "long double" t�r�n� desimal sistemde yazd�r�r.
*/
