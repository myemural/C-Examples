/*
* Author: Mustafa Yemural
* Date: 06/02/2017
* Description: Artýrma ve Azaltma Operatörleri
*/

#include<stdio.h>

int main()
{
	int a = 5;
	long b = 9;
	
	int c = 0;
	short d = 1;
	
	// Önce iþlem sonra sonuç:
	printf("%d\n", ++a);
	printf("%d\n", --b);
	
	// Önce sonuç sonra iþlem:
	printf("%d\n", c++);
	printf("%d\n", d--);
		 
	return 0;
}
