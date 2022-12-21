//#include <stdio.h>
//
//void Union(int a[10], int b[10], int n1, int n2){
//	int i, j, k=0;
//	int c[10];
//	
//	for(i = 0; i<n1; i++){
//		for(j = 0; j<k; j++){
//			if(a[i] == b[j]){
//				break;
//			}
//		if(k==j){
//			c[k] += a[i];
//			k++;
//		}
//		}
//	}
//	for(i = 0; i<n2; i++){
//		for(j = 0; j<k; j++){
//			if(a[i] == b[j]){
//				break;
//			}
//		if(k==j){
//			c[k] += b[i];
//			k++;
//		}
//		}
//	}
//	
//	printf("Union of set A and B is:-\n");
//     for(i=0;i<k;i++)
//      printf("%d ",c[i]);
//}
//
//void main(){
//	int a[10],b[10],n1, n2,i;
//	 
//	printf("Enter the number of elements. ");
//	scanf("%d", &n1);
//	printf("Enter SetA");
//	for(i=0;i<n1;i++)
//      scanf("%d",&a[i]);
//	printf("Enter the number of elements. ");
//	scanf("%d", &n2);
//	printf("Enter SetB");
//	for(i=0;i<n1;i++)
//      scanf("%d",&b[i]);
//
//	
//	Union(a[10],b[10],n1,n2);
//	
//
//}

//#include<stdio.h>
//void UNION(int setA[],int setB[])
//{
//   int setC[6];     // making setC where final answer will be
//   int i;
//   for(i=0;i<3;i++){  // copying set A to set C
//    	setC[i]=setA[i];
//   }
//   printf("the union is ");
//   for(i=0;i<sizeof(setC)/4;i++){
//		printf("%d ",setC[i]);
//   }
//
//}
//void main()
//{
//    int setA[3]={1,2,3};
//    int setB[3]={3,4,5};
//    UNION(setA,setB);
//
//}

#include <stdio.h>

void UNION(int setA[], int setB[],int a, int b){
	
	int setC[6];
	
	int i,j,x;
	
	for(i=0;i<a; i++){
		for (j = 0; j<sizeof(setB)/4; j++){
			if (setA[i]!= setB[j]){
				setC[i] = setA[i];
			} else {
				x++;
				break;
			}
		}
		
	}
	
	i = i-x;
	
	for(j=0; j < b ; j++){
		setC[i]=setB[j];
		i++;
	}

	printf("The union is: ");
	for (i=0 ; i< 6; i++){
		printf("%d ", setC[i]);
	}
}

int main(){
    int setA[3]={1,2,3};
    int setB[3]={3,4,5};
    
    UNION(setA,setB,sizeof(setA)/4,sizeof(setB)/4);
    return 0;
}
