/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: isalpha Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Bazý standart C fonksiyonlarýný içerir.

main()
{
      char ch;
      
      printf("Bir karakter girin: ");
      ch=getchar(); // Karakter giriþi...
      
      if(isalpha(ch)) // "isalpha" fonksiyonu girilen karakterin büyük veya küçük bir harf karakteri mi yoksa harfin dýþýnda bir karakter mi olduðunu kontrol eden standart bir C fonksiyonudur. Eðer harf ise 1, deðil ise 0 deðerini döndürür.
      {printf("\nBu bir harftir...\n");}
      else
      {printf("\nBu bir harf degildir...\n");}
      
      return 0;
}
