/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Fonksiyon Çağırmalarında Tür Dönüşümü
*/

#include<stdio.h>

double carp(double x, double y)
{
       return x*y;
}

int main()
{
      int a=6,b=5;
      
      printf("%f\n",carp(a,b)); // "int" türü "double" türüne dönüştürülür. Bu dönüşüme "Fonksiyon Çağırmalarında Tür Dönüşümü" denir.
      
      return 0;
}
