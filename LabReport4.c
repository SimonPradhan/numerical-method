//Qn 4
#include<stdio.h> 
#include<stdlib.h> 
//int main() { 
//	int arr_size, *arr, max, i; 
// 
//	printf("\nEnter size of the array: "); 
//	scanf("%d", &arr_size); 
// 
//	arr = (int*) calloc(arr_size, sizeof(int)); 
// 
//	printf("\nEnter the array: \n"); 
//	for( i = 0; i < arr_size; i++) { 
//		scanf("%d", (arr+i)); 
//	} 
// 
//	max = arr[0]; 
//	for( i = 0; i < arr_size; i++) { 
//		if(max < arr[i]) { 
//			max = arr[i]; 
//		} 
//	} 
//	printf("The maximum element is %d", max);
//	free(arr);
//}
//Qn5
//int main(){
//	int size1,size2,size3, *arr1, *arr2, *arr3 ,i;
//	printf("Enter the size for array one: ");
//	scanf("%d", &size1);
//	printf("Enter the size for array two: ");
//	scanf("%d", &size2);	
//	if(size1>size2){
//		size3 = size1;
//	}else{
//		size3 = size2;
//	}
//	arr1 = (int*)calloc(size1, sizeof(int));
//	arr2 = (int*)calloc(size2, sizeof(int));
//	arr3 = (int*)calloc(size3, sizeof(int));
//	
//	printf("\nEnter the array1: \n"); 
//	for( i = 0; i < size1; i++) { 
//		scanf("%d", (arr1+i)); 
//	} 
//	printf("For array 2: \n");
//	for( i = 0; i < size2; i++) { 
//		scanf("%d", (arr2+i)); 
//	} 
//	
//	for(i=0; i<size3; i++){
//		arr3[i] = arr1[i]+arr2[i];
//		
//	}	
//	
//	printf("Array 3 is : ");
//	for (i = 0; i < size3; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    free(arr1);
//    free(arr2);
//    free(arr3);
//	return 0;
//}

int main()
{
    int size, *arr, i;
    printf("How many elements do you want to enter? ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements for the array: ");
    for (i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int add_size;
    printf("How many elements do you want to add? ");
    scanf("%d", &add_size);

    arr = (int *)realloc(arr, (size + add_size) * sizeof(int));

	printf("Enter the array you want to add:\n ");
    for (i = size; i < size + add_size; i++)
    {
        scanf("%d", &arr[i]);  
    }

    printf("New array: ");
    for (i = 0; i < size + add_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
      
    free(arr);
    return 0;
}
 
