#include <stdio.h>
//int main(){
//	int a, b,i;
//	
//
//	printf("Enter the length of first array: ");
//	scanf("%d", &a);
//	array1[a];
//	for(i=0; i<a;i++){
//		printf("Enter the elements: ";)
//		scanf("%d", &array[i]);
//	}
//	printf("Enter the b; ");
//	for(i=0; i<= sizeof(b)/4; i++){
//		scanf("%d", &b[i]);
//	}
////	printf("Enter the array a: ");
////	scanf("%d", &a);
////	printf("Enter the array b: ");
////	scanf("%d", &b);
////	sizeof(a)
//	
//	if (sizeof(a)==sizeof(b)){
//		int c[100];
//		c[100] = a[5]+b[5];
//		printf("%d", c[100]);
//	}
//	else{
//		printf("The arrays is not equal in size. ");
//	}
//}

//int main(){

//int a,b,c;
//printf("Enter the number 1: \n");
//scanf("%d", &a);
//
//printf("Enter the number 2: \n");
//scanf("%d", &b);
//
//printf("Enter the number 3: \n");
//scanf("%d", &c);
//int *ptr1, *ptr2, *ptr3;
// 	ptr1 = &a;
// 	ptr2 = &b;
// 	ptr3 = &c;
//
//if(*ptr1>*ptr2 && *ptr1 > *ptr3 ){
//	printf("First number is the greatest. ");
//}
//else if(*ptr2>*ptr3 && *ptr2 > *ptr1 ){
//	printf("Second number is the greatest. ");
//}
//else{
//	printf("Third number is the greatest");
//}

void array(int *a[3]){
	*a[3] = &a[3];
if(a[0]>a[1] && a[0]>a[2]){
	printf("First element is the greatest");
}
else if(a[1]>a[0] && a[1]>a[2]){
	printf("Second element is the greatest");
}
else{
	printf("Third element is the greatest");
}
}
int main(){
	int a[3],i;
	for(i = 0; i<3; i++){
	printf("Enter the numbers: ");
	scanf("%d", &a[i]);
}
array(a[3]);
return 0;
}







