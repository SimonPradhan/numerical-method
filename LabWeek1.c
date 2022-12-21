#include <stdio.h>

int main(){
//Qn1
//    int n, i, sum;
//
//    /* Input upper limit of series */
//    printf("Enter nth term: ");
//    scanf("%d", &n);
//
//    /* Finds and displays triangular numbers */
//    sum = 0;
//    for(i=1; i<=n; i++)
//    {
//        sum = sum + i;
//        printf("%d ", sum);
//    }
//Qn2
//	int i;
//	int sum = 0;
//	for(i = 0; i<=10; i++){
//		sum = sum+i;
//	}
//	printf("%d", sum);
	
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
//
// char ch;
//    ch=getchar();
//    while(ch!='\n')
//    {
//        if(ch>='A'&&ch<='Z')
//        {
//            ch=ch+32;
//            printf("%c",ch);
//        }
//        else
//            printf("%c",ch);
//        ch=getchar();
//    }
	char firstalp = 'A', lastalp = 'E';
	int i, j;
	
		for(i = 1; i<=(lastalp - 'A' + 1); i++){
			for(j = 1; j<= i; j++){
				printf("%c ", firstalp);
			}
			firstalp++;
			printf("\n");
		}


}
