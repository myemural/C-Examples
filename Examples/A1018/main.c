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
      
      if(isdigit(ch)) // Girilen karakterin bir rakam olup-olmad���n� sorgular. E�er bir rakam ise "Do�ru", rakam de�il ise "Yanl��" d�nd�r�r.
      {printf("\nBu bir rakamdir.\n");}
      else
      {printf("\nBu bir rakam degildir.\n");}
      
      return 0;
}
