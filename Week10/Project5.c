#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void addMatrix(int a[][COLS], int b[][COLS], int c[][COLS]);
void printMatrix(int c[][COLS]);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS] = {
		{2, 3, 0}, 
		{8, 9, 1},
		{7, 0, 5}
	};
	
	int B[ROWS][COLS] = {
		{1, 0, 0}, 
		{0, 1, 0},
		{0, 0, 1}
	};
	
	int C[ROWS][COLS];
	
	addMatrix(A, B, C);
	printMatrix(C);
		
	return 0;
}

void addMatrix(int a[][COLS], int b[][COLS], int c[][COLS]){
	
	int i, j;
	
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLS;j++)
			c[i][j] = a[i][j] + b[i][j];
	}
	
}

void printMatrix(int c[][COLS]){
	
	int i, j;
	
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLS;j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}
