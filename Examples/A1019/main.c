/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: islower Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Baz� standart C fonksiyonlar�n� i�erir.

main()
{
      char ch;
      
      printf("Bir harf girin: ");
      ch=getchar(); // Karakter giri�i...
      
      if(islower(ch)) // "islower" fonksiyonu girilen karakterin b�y�k harf mi k���k harf mi oldu�unu kontrol eden standart bir C fonksiyonudur. E�er k���k harf ise 1, b�y�k harf ise 0 de�erini d�nd�r�r.
      {printf("\nKucuk harf...\n");}
      else
      {printf("\nBuyuk harf...\n");}
      
      return 0;
}
