#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial (int n) {
	int i, res = 1;
	for (i=1; i <= n; i++)
		res = res * i;
	return res;
}

int combination (int a, int b) {
	
	int x, y, z, comb;
	
	x = factorial(a);
	y = factorial(a-b);
	z = factorial(b);
	
	comb = x / (y*z);
	
	return comb; 
}

int get_integer () {
	
	int x;
	printf("Enter the value: ");
	scanf("%i", &x);
	
	return x;
}

int main(int argc, char *argv[]) {
	
	int n, r, result;
	
	n = get_integer();
	r = get_integer();
	
	result = combination(n, r);
	
	printf("The result of C(%d, %d) is %d", n, r, result);
	
	return 0;
}
