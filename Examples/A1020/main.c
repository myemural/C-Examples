/** @file main.c
 *  @brief TBD
 *
 *  TBD
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>
#include<ctype.h>

main()
{
      char ch;
      
      printf("Bir harf girin: ");
      ch = getchar();
      
      printf("\n%c\n", tolower(ch));
      
      return 0;
}
