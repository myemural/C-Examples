/** @file main.c
 *  @brief Sum of Two Integers
 *
 *  Sum of Two Integers
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include<stdio.h>

int main()
{
	int number1;
	int number2;
	
	printf("Enter first value: ");
	scanf("%d", &number1);
	
	printf("\nEnter second value: ");
	scanf("%d" ,&number2);
	
	printf("%d", (number1 + number2));
}
