#include <stdio.h>

int main(){

//Qn1
//	int i;
//	int sum = 0;
//	for(i = 0; i<=10; i++){
//		sum = sum+i;
//	}
//	printf("%d", sum);

//Qn2
//	int n, i, fact;
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		fact = fact*i;
//	}
//	printf("%d", fact);

//Qn3
//	int n , i , trinums;
//	printf("Enter the number of terms you want to print: ");
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		trinums = i*(i-1)/2;
//		printf("%d\n", trinums);
//}

//Qn4
//	char character, result;
//	printf("Enter the character you want to print lowercase: ");
//	scanf("%c", &character);
//	result = tolower(character);
//	printf("%c", result);
	
//Qn5
//	char character;
//		printf("Enter the character:");
//		character = getche();
//	while(character != 13){
//		printf("\nASCII value of %c = %d\n", character, character);
//		printf("Enter the character:");
//		character = getche();
//	}
	
//Qn6
//	char firstalp = 'A', lastalp = 'E';
//	int i, j;
//	
//		for(i = 1; i<=(lastalp - 'A' + 1); i++){
//			for(j = 1; j<= i; j++){s
//				printf("%c ", firstalp);
//			}
//			firstalp++;
//			printf("\n");
//		}
		
//	char character;
//	do{
//		printf("Enter the character:");
//		character = getche();
//		printf("\nASCII value of %c = %d\n", character, character);
//	}
//
//	while(character != 13);

    int n, i, sum;

    /* Input upper limit of series */
    printf("Enter nth term: ");
    scanf("%d", &n);

    /* Finds and displays triangular numbers */
    sum = 0;
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
        printf("%d ", sum);

    }
	return 0;
}
