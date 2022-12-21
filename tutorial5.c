#include <stdio.h>
struct coordinate{
	float x;
	float y;
};

struct coordinate getPoint(){
	struct coordinate p;
	printf("Enter the x coordinate: ");
	scanf("%f", &p.x);
	printf("Enter the y coordinate: ");
	scanf("%f", &p.y);
	return p;
}

struct coordinate calcMid(struct coordinate p1, struct coordinate p2){
	struct coordinate mid;
	mid.x = (p1.x + p2.x)/2;
	mid.y = (p1.y + p2.y)/2;
	return mid;
	
}	
void displayPoint(struct coordinate ass){
	printf("The midpoint of x is %.2f and y is %.2f", ass.x,ass.y);
}
void main(){
	struct coordinate p1,p2,midpoint;
	p1 = getPoint();
	p2 = getPoint();
	midpoint = calcMid(p1,p2);
	displayPoint(midpoint);
	
	
}
