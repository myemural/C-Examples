/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: isalpha Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Baz� standart C fonksiyonlar�n� i�erir.

main()
{
      char ch;
      
      printf("Bir karakter girin: ");
      ch=getchar(); // Karakter giri�i...
      
      if(isalpha(ch)) // "isalpha" fonksiyonu girilen karakterin b�y�k veya k���k bir harf karakteri mi yoksa harfin d���nda bir karakter mi oldu�unu kontrol eden standart bir C fonksiyonudur. E�er harf ise 1, de�il ise 0 de�erini d�nd�r�r.
      {printf("\nBu bir harftir...\n");}
      else
      {printf("\nBu bir harf degildir...\n");}
      
      return 0;
}
