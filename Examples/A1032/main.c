/*
* Author: Mustafa Yemural
* Date: 13/02/2017
* Description: İki Matrisin Toplamı ve Farkı (Addition and Subtraction of Two Matrices)
*/

#include<stdio.h>

#define MATRIX_SIZE 10

typedef enum Func {SUM, SUB, DISPLAY}Func;

void function(int f[][MATRIX_SIZE], int s[][MATRIX_SIZE], Func type)
{
	int result[MATRIX_SIZE][MATRIX_SIZE];
	int i,j;

	for(i=0; i<MATRIX_SIZE; i++)
	{
		for(j=0; j<MATRIX_SIZE; j++)
		{
			if(type == SUM) // Sum and display
			{
				result[i][j] = f[i][j] + s[i][j];
				printf("%d ", result[i][j]);
			}
			else if(type == SUB) // Subtract and display
			{
				result[i][j] = f[i][j] - s[i][j];
				printf("%d ", result[i][j]);
			}
			else // Only display first matrix;
			{
				printf("%d ", f[i][j]);
			}
		}
		puts("");
	}

}

int main(int argc, char *argv[])
{
	int first[MATRIX_SIZE][MATRIX_SIZE], second[MATRIX_SIZE][MATRIX_SIZE];
	int op;
	Func a;

	printf("Please enter first %dx%d matrix: \n",MATRIX_SIZE,MATRIX_SIZE);

	for(int i=0; i<MATRIX_SIZE; i++)
		for(int j=0; j<MATRIX_SIZE; j++)
			scanf("%d", &first[i][j]);

	printf("Please enter second %dx%d matrix: \n",MATRIX_SIZE,MATRIX_SIZE);
	for(int i=0; i<MATRIX_SIZE; i++)
		for(int j=0; j<MATRIX_SIZE; j++)
			scanf("%d", &second[i][j]);

	do{
		printf("Select operation (SUM(0), SUB(1), DISPLAY(2)): ");
		scanf("%d", &op);
	}while(op > 2 || op < 0);
	a = op;

	function(first,second,a);

	return 0;
}
