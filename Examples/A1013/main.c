/** @file main.c
 *  @brief ASCII Value of a Character
 *
 *  ASCII Value of a Character
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
	char c;
	printf("Bir karakter girin: ");
	scanf("%c", &c);
	printf("%c karakterinin ASCII karsiligi: %d", c, c);

	return 0;
}
