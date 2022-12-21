#include <stdio.h>
#include <stdlib.h>
//Qn1
//int main(){
//	int a[5] = {1,2,3,4,5};
//	int *ptr, i,n;
//	ptr = &a[0];
//	n = sizeof(a)/sizeof(int);
//	for(i = 0; i<n; i++){
//		printf("%d,", *(ptr+i));
//	}	
//}

//Qn2
//int main(){
//	int a[5] = {1,2,3,4,5};
//	int *ptr, i,n,sum = 0;
//	ptr = &a[0];
////	n = sizeof(a)/sizeof(int);
//	for(i = 0; i<5; i++){
//		sum = sum + *(ptr+i);
//	}	
//	printf("%d", sum);
//}

//Qn3
void main(){
	int a[5] = {1,2,6,4,5};
	int len = sizeof(a)/sizeof(int);
	int input,i,*ptr;
	printf("Enter the number of element in the array: ");
	scanf("%d", &input);
	ptr = &a[0];
	for(i = 0; i<len; i++){
		if( *(ptr+i) == input){
			ptr= &a[i];
			
			printf("%d", *ptr );
			break;
		}
	}
}
