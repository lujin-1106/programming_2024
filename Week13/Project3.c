#include <stdio.h>
#include <stdlib.h>

#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

int main(int argc, char *argv[]) {
	
	struct student s[STUDENTNUM];
	int i, highnum = 0, highid;
	double sum = 0;
	
	for(i=0; i<STUDENTNUM; i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
	}
	
	for(i=0; i<STUDENTNUM; i++){
		sum += s[i].score;
		if (s[i].score > highnum){
			highid = s[i].ID;
			highnum = s[i].score;
		}
	}
	
	printf("The average of the score : %f\n", (sum/STUDENTNUM));
	printf("The highest score - ID: %d, score: %d", highid, highnum);
	

	return 0;
}
