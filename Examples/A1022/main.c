/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Mant�ksal Operat�rler
*/

#include<stdio.h>

main()
{
      int x = 3 < 5 && 7;
      
      printf("%d\n", x);
      
      return 0;
}
/*
MANTIKSAL OPERAT�RLER:

1) "!" Operat�r�(De�il): De�il operat�r� tek operand al�r ve her zaman �nek durumundad�r (unary prefix). 2. seviyededir ve sa�dan sola do�ru ilerler.
�rnek: x = !25; // x de�i�kenine "0" de�eri atan�r.

2) "&&" Operat�r�(Ve): 11. seviyededir ve soldan sa�a do�ru ilerler.
�rnek: x = 3 < 5 && 7; // x=1

3) "||" Operat�r�(Veya): 12. seviyededir ve soldan sa�a do�ru ilerler.
�rnek: a = 3 || 5; // a=1
*/
