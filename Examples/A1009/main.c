/** @file main.c
 *  @brief Find All Factors of a Number
 *
 *  It is a program that finds all the factors of a number 
 *  N received from the user.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
	int N;

	printf("Give a positive integer: ");
    scanf("%d", &N);

	printf("All factors of %d are: ", N);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			printf("%d ", i);
		}
	}  
		 
	return 0;
}
