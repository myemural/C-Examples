/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: printf Tür Karakterleri
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
%d: "int" türünü desimal sistemde yazar.
%ld: "long" türünü desimal sistemde yazar
%x: "unsigned int" türünü hexadecimal sistemde yazar.
%X:	"unsigned int" türünü hexadecimal sistemde yazar.(semboller büyük harfle)
%lx: "unsigned long" türünü hexadecimal sistemde yazar.
%u: "unsigned int" türünü decimal sistemde yazar.
%o: "unsigned int" türünü oktal sistemde yazar.
%f: "float" ve "double" türlerini desimal sistemde yazar.
%lf: "double" türünü desimal sistemde yazar.
%e: gerçek sayýlarý üstel biçimde yazar.
%c: "char" veya "int" türünü karakter görüntüsü olarak yazdýrýr.
%s: "string" olarak yazdýrýr.
%lf: "long double" türünü desimal sistemde yazdýrýr.
*/
