#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point {
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){
	int width, length;
	if (p1.x>p2.x)
		width = p1.x - p2.x;
	else
		width = p2.x - p1.x;
	
	if (p1.y>p2.y)
		length = p1.y - p2.y;
	else
		length = p2.y - p1.y;
		
	return (width*length);	 
}

int main(int argc, char *argv[]) {
	
	struct point p1, p2;
	int area;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(p1, p2);
	
	printf("Area : %d", area);
	
	return 0;
}
