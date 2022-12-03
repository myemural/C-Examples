/** @file main.c
 *  @brief Type Conversion Example 2
 *
 *  This is an example of type conversion with no information loss.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
      double leftx;
      int righty = 5;

      leftx = righty; /* Right side convert to left side. There is no loss of information here. */
      
      printf("%f\n", leftx);
      
      return 0;
}
