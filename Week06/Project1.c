#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Enter a integer: ");
	scanf("%i", &n);
	
	if (n == 0)
		printf("This is 0\n");
	else if (n > 0)
		printf("This is positive number\n");
	else if (n < 0)
		printf("This is negative number\n");
	
	return 0;
}
