/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: tolower Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Bazý standart C fonksiyonlarýný içerir.

main()
{
      char ch;
      
      printf("Bir harf girin: ");
      ch=getchar(); // Karakter giriþi...
      
      printf("\n%c\n",tolower(ch));; // "tolower" fonksiyonu eðer girilen harf büyükse, küçük harfe döndürür. Eðer küçük harfse, dokunmadan geri döndürür.
      
      return 0;
}
