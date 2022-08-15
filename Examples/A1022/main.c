/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Mantýksal Operatörler
*/

#include<stdio.h>

main()
{
      int x = 3 < 5 && 7;
      
      printf("%d\n", x);
      
      return 0;
}
/*
MANTIKSAL OPERATÖRLER:

1) "!" Operatörü(Deðil): Deðil operatörü tek operand alýr ve her zaman önek durumundadýr (unary prefix). 2. seviyededir ve saðdan sola doðru ilerler.
Örnek: x = !25; // x deðiþkenine "0" deðeri atanýr.

2) "&&" Operatörü(Ve): 11. seviyededir ve soldan saða doðru ilerler.
Örnek: x = 3 < 5 && 7; // x=1

3) "||" Operatörü(Veya): 12. seviyededir ve soldan saða doðru ilerler.
Örnek: a = 3 || 5; // a=1
*/
