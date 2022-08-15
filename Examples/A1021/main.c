/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Kar��la�t�rma Operat�rleri
*/

#include<stdio.h>

int main()
{
      int x = 5;
      int y;
      
      y = (x > 5) + 1; // Buradaki ifade mant�ksal olarak do�ru(1) veya yanl��(0) belirtir.
      printf("%d\n", y);
      
      return 0;
}
/*
KAR�ILA�TIRMA OPERAT�RLER�:
<       k���kt�r (less than)
> 		b�y�kt�r (greater than)
<=		k���k e�it (less than or equal)
>=		b�y�k e�it (greater than or equal)
==		e�ittir. (equal)
!=  	e�it de�ildir. (not equal)

NOT: Bu operat�rlerin hepsi iki operand alan araek operat�rlerdir (binary infix). Hepsi soldan sa�a do�rudur. "==" ve "!=" ifadeleri 7. seviyededir. Di�erleri 6. seviyededir.
*/
