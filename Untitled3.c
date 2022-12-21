#include <stdio.h>
void main()
{
//Qn1
//	printf("Hello World\n");
//
// Qn2	
//	int a=2, b=3;
//	int add = a+b;
//	printf("%d",add);

//Qn3	
//	(degreec * 9/5) + 32
//	float celcius;
//	printf("Enter temperature in celcius: ");	
//	scanf("%f", &celcius);
//	float farhenheit = ((celcius * 9)/5) + 32;
//	printf("%f", farhenheit);

//Qn4
//int p,t;
//float r, interest;
//
//printf("Enter the principle: ");
//scanf("%d", &p);
//printf("Enter the time: ");
//scanf("%d", &t);
//printf("Enter the rate: ");
//scanf("%f", &r);
//
//interest = (p*t*r)/100;
//printf("%f", interest);

//Qn5


//Qn6
//int n ; 
//printf("Enter positive number: ");
//scanf("%d", &n);
//
//if( n%2==0){
//	printf("The number is Even.");
//}
//else{
//	printf("The number is Odd.");
//}

//Qn7
//int a, b, c;
//printf("First number:\n ");
//scanf("%d", &a);
//printf("Second number:\n ");
//scanf("%d", &b);
//printf("Third number:\n ");
//scanf("%d", &c);
//
//if (a>b && a>c){
//	printf("a is the greatest.");
//}
//else if (b>a && b>c){
//	printf("b is the greatest.");
//}
//else if (c>a && c>b){
//	printf("c is the greatest.");
//}
//else {
//	printf("Try again.");
//}

//Qn8
	//Switch statement is a type of if else statement which selects one of many code block to be executed.
	//Syntax : 
	//	switch(expression){
	//		case x;
	//		// code block
	//		break;
	//	}

//Qn9
//int n=100, i;
//for(i=1; i<=100; i++){
//	if(i%2==0){
//		printf("\n%d",i);
//	}
//}

//Qn10
//int n = 5, i, j;
//for(i = 1; i<=n; i++){
//		for(j= 1; j<=i; j++){
//			printf("%d\t", i);
//		}
//	printf("\n");
//}

//Qn11
int n, m, i, product;
int factor = 1;
printf("Enter the Number:\n ");
scanf("%d", &n);
printf("Enter the factor:\n ");
scanf("%d", &m);

for( i=1; i<=m; i++){
	product = n* factor;
	factor = factor + 1;
	printf("%d\n", product );
}

return 0;
}

