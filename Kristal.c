#include <stdio.h>
void main(){
	int i;
	int arr1[10]={1,3,5,6,7,8};
	int arr2[10]={3,6,8,8,9,10};
	int arr3[20];

	int arr3[20]= arr1[10];
	int arr3[20]+=arr2[10];
	
	for(i=0,i<sizeof(arr3)/sizeof(int);i++){
			printf("%d", arr3[i]);
	}

}
