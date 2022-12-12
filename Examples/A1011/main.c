/** @file main.c
 *  @brief sizeof Operator
 *
 *  sizeof Operator
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
      int x = 2;

      printf("%d\n", sizeof(x)); /* Call with name */
      printf("%d\n", sizeof(int)); /* Call with type */
      
      return 0;
}
