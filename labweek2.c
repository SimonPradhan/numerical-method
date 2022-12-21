#include <stdio.h>

//int cube(int num)
//{
//    return num * num * num;
//}
//
//int main()
//{
//    int n;
//    printf("Enter the number: ");
//    scanf("%d", &n);
//    printf("%d\n", cube(n));
//    return 0;
//}

//void swap(int *a, int *b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//
//int main()
//{
//    int a,b;
//    printf("Enter the number a: ");
//    scanf("%d", &a);
//    printf("Enter the number b: ");
//	scanf("%d", &b);
//	printf("Before swapping a = %d and b = %d", a,b);
//    swap(&a, &b);
//    printf("\nAfter swapping a = %d, b = %d",a,b);
    
//void swap(int *xp, int *yp)
//{
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
// 
//int main()
//{
//    int x=2, y=1;
//    swap(&x, &y);
//    printf("\nAfter Swapping: x = %d, y = %d", x, y);

//void midpoint(float x1, float x2, float y1, float y2)
//{
//    float xmid, ymid;
//    xmid = (x1 + x2) / 2;
//    ymid = (y1 + y2) / 2;
//
//    printf("The midpoint coordinate of the line is (%.2f,%.2f)\n", xmid, ymid);
//}
//int  main()
//{
//    float x1, x2, y1, y2;
//    printf("Enter x1 : ");
//    scanf("%f", &x1);
//    printf("Enter x2 : ");
//    scanf("%f", &x2);
//    printf("Enter y1 : ");
//    scanf("%f", &y1);
//    printf("Enter y2 : ");
//    scanf("%f", &y2);
//	midpoint(x1, x2, y1, y2);

//int check_perfect_number(int num)
//{
//    int result = 0, i;
//    for (i = 0; i < num; i++)
//    {
//        if (num % i == 0)
//        {
//            result += i;
//        }
//    }
//    return (result == num);
//}
//
//int check_armstrong_number(int num)
//{
//    int result = 0;
//    int temp = num;
//    int digit;
//    while (temp > 0)
//    {
//        digit = temp % 10;
//        result += (digit * digit * digit);
//        temp /= 10;
//    }
//    return (num == result);
//}

//int main()
//{
//    int perfectNumber = 6;
//    if (check_perfect_number(perfectNumber) == 1){
//        printf("The given number is a perfect number.\n");
//    }
//    else{
//        printf("The given number is not a perfect number.\n");
//	}
//    int armstrongNumber = 371;
//    if (check_armstrong_number(armstrongNumber) == 1){
//        printf("The given number is an armstrong number.\n");
//    }
//    else{
//    	printf("The given number is not an armstrong number.\n");
//	}   
//	return 0;
//}
void equations(double a, double b, double c, double d,
               double e, double f)
{
    double x, y;
    x = (f * b - e * c) / (b * d - a * e);
    y = (c - a * x) / b;

    printf("The point where the two lines cross each other is (%g, %g)", x, y);
}

int main()
{
    equations(2, 4, 14, 4, 4, 4);
    return 0;
}
