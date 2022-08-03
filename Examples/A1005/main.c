/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Tür Dönüşümü Örneği 1
*/

#include<stdio.h>

main()
{
      int a=5;
      double b=7.2,sonuc;

      sonuc=a+b; // Küçük olan tür, büyük olan türe dönüştürülür. Bu duruma terfi(promotion) denir.

      printf("%f\n",sonuc);

      return 0;
}
