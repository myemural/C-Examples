/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Bir Karakterin ASCII Karşılığı (ASCII Value of a Character)
*/

#include<stdio.h>

int main()
{
	char c;
	printf("Bir karakter girin: "); // Kullanıcıya gönderilen istem(prompt) mesjıdır.
	scanf("%c", &c); // Kullanıcıdan karakter tipinde bir veri alınır.
	printf("%c karakterinin ASCII karsiligi: %d", c, c); // %d ile karakterin ASCII karşılığı gösterilir.

	return 0;
}
