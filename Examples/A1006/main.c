/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Tür Dönüşümü Örneği 2
*/

#include<stdio.h>

int main()
{
      double leftx;
      int righty = 5;

      leftx = righty; // Sağ taraftaki tür sol taraftaki türe dönüştürülür. Küçük olan tür, büyük olan türe dönüştürülürken bilgi kaybı olmaz.
      
      printf("%f\n",leftx); // Bu tür dönüşümlere "Atama Tür Dönüşümleri" denir.
      
      return 0;
}
