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
      
    printf("Bir karakter girin: ");
    ch = getchar();
      
    if(isalpha(ch)) {
        printf("\nBu bir harftir...\n");
    } else {
        printf("\nBu bir harf degildir...\n");
    }
      
    return 0;
}
