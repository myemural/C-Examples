/** @file main.c
 *  @brief TBD
 *
 *  TBD
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
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
		while(number[i] != '\0')
		{
			if(isdigit(number[i]))
				flag = TRUE;
			else
			{
				flag = FALSE;
				break;
			}
			i++;
		}
	}while(flag == FALSE);

	i=0;
	while(number[i] != '\0')
	{
		sum += (int)number[i] - 48;
		i++;
	}

	printf("\nSayinin rakamlari toplami: %d",sum);

	return 0;
}
