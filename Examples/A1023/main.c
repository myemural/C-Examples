/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Dairenin Alanı ve Çevresi (Area and Circumference of Circle)
*/

#include<stdio.h>

int main()
{
      int radius;
      const float PI = 3.14;
      float area, circum;

      printf("Dairenin yarıçapını girin: ");
      scanf("%d", &radius);

      if(radius >= 0)
      {
    	  area = PI * radius * radius;
    	  circum = 2 * PI * radius;
    	  printf("\nDairenin Alanı: %.2f", area);
    	  printf("\nDairenin Çevresi: %.2f", circum);
      }
      else
      {
    	  printf("\nYanlış Bir yarıçap değeri girdiniz!");
      }

      return 0;
}
