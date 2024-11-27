#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int id;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	
	struct student s1 = {24, "Eunju", 4.3};
	
	s1.id = 20;
	strcpy(s1.name, "Eunju Cha");
	s1.grade = 4.2;
	
	printf("ID: %d\n", s1.id);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.grade);
	
	return 0;
}
