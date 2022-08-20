/*
* Author: Mustafa Yemural
* Date: 13/02/2017
* Description: Bir Sayının Rakamlarının Toplamı(Add Digits of a Number)
*/

#include<stdio.h>
#include<ctype.h>

enum Bool{FALSE, TRUE};
typedef enum Bool Bool;

int main(int argc, char *argv[])
{
	char number[100];
	Bool flag = FALSE;
	int i, sum=0;

	do{
		printf("Lutfen bir sayi girin: ");
		scanf("%s",number);

		i=0;
		while(number[i] != '\0') // String'in sonuna kadar tara.
		{
			if(isdigit(number[i])) // Karakterlerin rakam olup olmadığını kontrol et.
				flag = TRUE;
			else
			{
				flag = FALSE;
				break;
			}
			i++;
		}
	}while(flag == FALSE); // Doğru girdi alana kadar sor.

	i=0;
	while(number[i] != '\0') // String'in sonuna kadar tara.
	{
		sum += (int)number[i] - 48; // Her bir karakteri önce int türüne çevirip daha sonra rakama dönüştürürüz.
		i++;
	}

	printf("\nSayinin rakamlari toplami: %d",sum);

	return 0;
}
