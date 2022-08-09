/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: sizeof Operatörü
*/

#include<stdio.h>

int main()
{
      int x = 2;

      printf("%d\n", sizeof(x)); // İsim ile çağırma
      printf("%d\n", sizeof(int)); // Tür ile çağırma
      // Bu operatör türün bellekte kaç byte yer kapladığını öğrenir.
      return 0;
}
