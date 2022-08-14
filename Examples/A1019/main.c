/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: islower Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Bazý standart C fonksiyonlarýný içerir.

main()
{
      char ch;
      
      printf("Bir harf girin: ");
      ch=getchar(); // Karakter giriþi...
      
      if(islower(ch)) // "islower" fonksiyonu girilen karakterin büyük harf mi küçük harf mi olduðunu kontrol eden standart bir C fonksiyonudur. Eðer küçük harf ise 1, büyük harf ise 0 deðerini döndürür.
      {printf("\nKucuk harf...\n");}
      else
      {printf("\nBuyuk harf...\n");}
      
      return 0;
}
