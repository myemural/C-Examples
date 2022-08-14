/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: isdigit Fonksiyonu
*/

#include<stdio.h>
#include<ctype.h>

main()
{
      char ch;
      
      printf("Bir karakter girin: ");
      ch=getchar();
      
      if(isdigit(ch)) // Girilen karakterin bir rakam olup-olmadýðýný sorgular. Eðer bir rakam ise "Doðru", rakam deðil ise "Yanlýþ" döndürür.
      {printf("\nBu bir rakamdir.\n");}
      else
      {printf("\nBu bir rakam degildir.\n");}
      
      return 0;
}
