//#include <stdio.h>
//void main(){
//	int arr_size;
//    printf("Enter the number of elements you want to enter: ");
//    scanf("%d", &arr_size);
//    int arr[arr_size], i;
//
//    for (i = 0; i < arr_size; i++)
//    {
//        printf("Enter element %d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//
//    int max = arr[0];
//    for (i = 1; i < arr_size; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d is the largest element in the array.\n", max);
//    return 0;
//
//}
//
//#include <stdio.h>
//#include <string.h>
//
//char *sort_string(char string[])
//{
//    char temp;
//    int len = strlen(string),i,j;
//    for (i = 0; i < len; i++)
//    {
//        for (j = 0; j < (len - 1); j++)
//        {
//            if (string[j] > string[j + 1])
//            {
//                temp = string[j];
//                string[j] = string[j + 1];
//                string[j + 1] = temp;
//            }
//        }
//    }
//    return string;
//}
//
//int main()
//{
//    char first_string[20];
//    char second_string[20];
//
//    printf("Enter first word: ");
//    scanf("%s", first_string);
//    printf("Enter second word: ");
//    scanf("%s", second_string);
//
//    char *sorted_first = sort_string(first_string);
//    char *sorted_second = sort_string(second_string);
//
//    if (strcmp(sorted_first, sorted_second) == 0)
//    {
//        printf("The words are anagrams.\n");
//    }
//    else
//    {
//        printf("The words are not anagrams.\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int arr_size;
//    printf("Enter the number of elements you want to enter: ");
//    scanf("%d", &arr_size);
//    int arr[arr_size],i;
//
//    for ( i = 0; i < arr_size; i++)
//    {
//        printf("Enter element %d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//
//    for ( i = 0; i < arr_size; i++)
//    {
//        int j;
//        for (j = i + 1; j < arr_size; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                break;
//            }
//        }
//        if (j == arr_size)
//            printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int arr_size;
//    printf("Enter the number of elements you want to enter: ");
//    scanf("%d", &arr_size);
//    int arr[arr_size],i;
//
//    for ( i = 0; i < arr_size; i++)
//    {
//        printf("Enter element %d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//
//    int sum = 0;
//    for ( i = 0; i < arr_size; i++)
//    {
//        if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0)
//            sum += arr[i];
//    }
//    printf("The sum is %d.\n", sum);
//    return 0;
//}

#include <stdio.h>

int main()
{
    int arr_1[3][3] = {{3, 6, 8}, {1, 4, 2}, {5, 9, 7}};
    int arr_2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int ROW_SIZE = 3;
    int COL_SIZE = 3;
	int row, col;
    for ( row = 0; row < ROW_SIZE; row++)
    {
        for ( col = 0; col < COL_SIZE; col++)
        {
            printf("%d ", arr_1[row][col] + arr_2[row][col]);
        }
        printf("\n");
    }
    return 0;
}
