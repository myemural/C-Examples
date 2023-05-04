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
      
    if(isdigit(ch)) {
        printf("\nBu bir rakamdir.\n");
    } else {
        printf("\nBu bir rakam degildir.\n");
    }
      
    return 0;
}
