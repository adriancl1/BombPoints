#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){
	int row, column, radius, points;
	int matrix[8][8] = {
	{1,0,1,0,1,0,0,1},
	{0,0,2,0,0,0,0,0},
	{0,0,2,0,2,0,2,0},
	{0,1,0,0,0,0,0,0},
	{0,0,0,0,0,2,0,0},
	{0,2,0,1,0,0,0,2},
	{0,0,0,2,0,0,1,0},
	{2,0,1,0,0,1,0,0}
	};//matrix
	printf("Enter row: ");
	scanf_s("%i", &row);
	printf("\nEnter column: ");
	scanf_s("%i", &column);
	printf("\nEnter radius: ");
	scanf_s("%i", &radius);
	points = reach(matrix, row, column, radius);
	printf("You got %i points!\n", points);
	system("pause");
	return 0;
}