#include <stdio.h>

//Qn 1) Write a program in C to store n elements in an array and print the elements using pointer.
//int main(){
//	int len,i ;
//	printf("Enter the number of elements: \n");
//	scanf("%d", &len);
//	
//	int arr[len];
//	for(i = 0; i<len; i++){
//		printf("Enter the element %d : ", i+1);
//		scanf("%d", &arr[i]);
//	}
//	int *a;
//	a= arr;
//	for(i = 0; i<len; i++){
//		 printf("%d ",a[i]);
//	}
//	return 0;
//}

//Qn 2) Write a program in C to compute the sum of all elements in an array using pointer. 
//void main(){
//	int arr[5]= {1,2,3,4,5};
//	int sum = 0, i;
//	int*ptr;
//	ptr = &arr[0];  
//	for(i=0; i<5; i++){
//		sum+= ptr[i];
//	}
//	printf("The sum of the elements of the array is %d", sum);
//}

//3) Write a C program to search an element in array using pointers.
//int main(){
//	int n;
//	printf("Enter the element you want to check: ");
//	scanf("%d", &n);
//	
//	int array[] = {1,3,5,6,8}, i, j;
//	int *ptr;
//	ptr = &array[0 ];
//	int size = sizeof(array)/sizeof(int);
//	for(i=0; i<size; i++){
//		for(j =0; j<size; j++){
//			if(ptr[j]==n){
//				printf("The number is in index %d.", j);
//				return 0;
//			}
//		}
//	}
//	printf("The number is not in the array.");
//}

//4) Write a 'C' program to reverse an array's elements using dynamic memory allocation.
//#include <stdlib.h>
//int main(){
//	int len,i ,*ptr;
//	
//	printf("Enter the number of elements: \n");
//	scanf("%d", &len);
//	ptr =(int*)calloc(len,sizeof(int));
//	
//	for(i = 0; i<len; i++){
//		printf("Enter the elements: ");
//		scanf("%d", ptr+1);
//	}
//	for(i=5; i>0; i--){
//		scanf("%d", ptr+1);	
//		printf(ptr);
//	}
//	free(ptr);
//	return 0;
//}

//5) Write a program in c to store n input (double type) using DMA and display them using pointer variable.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Allocate memory for an integer
  int *int_ptr = malloc(sizeof(int));
  if (int_ptr == NULL) {
    // malloc returned NULL, which means there was an error allocating memory
    perror("Error allocating memory for int");
    return 1;
  }

  // Allocate memory for a character
  char *char_ptr = malloc(sizeof(char));
  if (char_ptr == NULL) {
    perror("Error allocating memory for char");
    return 1;
  }

  // Allocate memory for a float
  float *float_ptr = malloc(sizeof(float));
  if (float_ptr == NULL) {
    perror("Error allocating memory for float");
    return 1;
  }

  // Now you can use the pointers to store values in the dynamically-allocated memory
  *int_ptr = 123;
  *char_ptr = 'A';
  *float_ptr = 3.14;

  printf("%d,%.2f,%c\n", *int_ptr,*float_ptr, *char_ptr);
  

  // Don't forget to free the memory when you're done with it
  free(int_ptr);
  free(char_ptr);
  free(float_ptr);

  return 0;
}
