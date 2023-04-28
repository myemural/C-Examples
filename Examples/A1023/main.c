/** @file main.c
 *  @brief TBD
 *
 *  TBD
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
      int radius;
      const float PI = 3.14;
      float area, circum;

      printf("Enter radius: ");
      scanf("%d", &radius);

      if(radius >= 0)
      {
    	  area = PI * radius * radius;
    	  circum = 2 * PI * radius;
    	  printf("\nArea of Circle: %.2f", area);
    	  printf("\nCircumference of Circle: %.2f", circum);
      }
      else
      {
    	  printf("\nYou entered wrong radius value!");
      }

      return 0;
}
