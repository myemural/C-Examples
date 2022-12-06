/** @file main.c
 *  @brief Type Conversion on Function Calls
 *
 *  Type Conversion on Function Calls
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

double mult(double x, double y)
{
       return x * y;
}

int main()
{
      int a = 6, b = 5;
      
      printf("%f\n", mult(a, b)); /* int converted to double */
      
      return 0;
}
