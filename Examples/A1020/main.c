/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: tolower Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h> // Baz� standart C fonksiyonlar�n� i�erir.

main()
{
      char ch;
      
      printf("Bir harf girin: ");
      ch=getchar(); // Karakter giri�i...
      
      printf("\n%c\n",tolower(ch));; // "tolower" fonksiyonu e�er girilen harf b�y�kse, k���k harfe d�nd�r�r. E�er k���k harfse, dokunmadan geri d�nd�r�r.
      
      return 0;
}
