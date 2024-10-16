#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 50;
	int guess, n = 0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &guess);
		n++;
		
		if(guess > answer)
			printf("High!\n");
		else if (guess < answer)
			printf("Low!\n");
			
	}while(guess != answer);
	
	printf("Congratulation! Trials: %d", n);
	
	return 0;
}
