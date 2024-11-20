#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = NULL;
	char str[100];
	int n = 100;
	
	fp = fopen("sample.txt", "r");
	
	if (fp == NULL)
		printf("파일을 못열음\n");
	
	while(fgets(str, n, fp) != NULL){
		printf("%s", str);		
	}
	
	fclose(fp);
	
	return 0;
}
