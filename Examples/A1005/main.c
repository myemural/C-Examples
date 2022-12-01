/** @file main.c
 *  @brief Type Conversion Example 1
 *
 *  This shows promotion.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

main()
{
      int a = 5;
      double b = 7.2, sonuc;

      sonuc = a + b; /* Little type is converted into big type and this called promotion. */

      printf("%f\n", sonuc);

      return 0;
}
