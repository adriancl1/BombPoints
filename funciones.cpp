#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int reach(int matrix[8][8], int x, int y, int radius){
	int points = 0;
	if (x >= 0 && x <= 8 && y >= 0 && y <= 8){
		int left = x - radius;
		int right = x + radius;
		int top = y + radius;
		int bottom = y - radius;
		for (int startrow = left; startrow <= right; startrow++){
			for (int startcolumn = bottom; startcolumn <= top; startcolumn++){
				if (matrix[startrow][startcolumn] == 1){
					points += 1;
				}
				else if (matrix[startrow][startcolumn] == 2){
					points += 5;
				}
				else if (matrix[startrow][startcolumn] == 0){
					points += 0;
				}
			}
		}
	}
	return points;
}