/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Karþýlaþtýrma Operatörleri
*/

#include<stdio.h>

int main()
{
      int x = 5;
      int y;
      
      y = (x > 5) + 1; // Buradaki ifade mantýksal olarak doðru(1) veya yanlýþ(0) belirtir.
      printf("%d\n", y);
      
      return 0;
}
/*
KARÞILAÞTIRMA OPERATÖRLERÝ:
<       küçüktür (less than)
> 		büyüktür (greater than)
<=		küçük eþit (less than or equal)
>=		büyük eþit (greater than or equal)
==		eþittir. (equal)
!=  	eþit deðildir. (not equal)

NOT: Bu operatörlerin hepsi iki operand alan araek operatörlerdir (binary infix). Hepsi soldan saða doðrudur. "==" ve "!=" ifadeleri 7. seviyededir. Diðerleri 6. seviyededir.
*/
