#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, min, sec;
	
	printf("Input the second: ");
	scanf("%i", &n);
	
	min = n / 60;
	sec = n % 60;
	
	printf("The time is %d : %d\n",min, sec);
	
	return 0;
}
