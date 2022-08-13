/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: getchar Fonksiyonu
*/

#include <stdio.h>

int main()
{
	char ch;

	ch = getchar(); // Klavyeden bir harf alır ve Enter tuşuna ihtiyaç duyar. Geri dönüş değeri, alınan karakterin ASCII kodudur.
	printf("\nKarakter olarak ch = %c\nASCII numarasi ch = %d\n", ch, ch);

	return 0;
}
