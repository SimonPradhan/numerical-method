#include <stdio.h>
#include <math.h>
//float main()
//{
//    float x1, y1, x2, y2;
//    printf("Enter the value of x1, y1, x2 and y2: ");
//    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
//    midpoint(x1, y1, x2, y2);
//    return 0;
//}
//void midpoint(float x1, float y1, float x2, float y2)
//{
//    float xmid, ymid;
//    xmid=(x1+x2)/2;
//    ymid=(y1+y2)/2;
//    printf("Midpoint of the line: (%.2f, %.2f)\n", xmid, ymid);
//}

//int main(){
//		
//}

//Qn2

//void greatest(int num1, int num2){
//	if (num1 > num2){
//		return num1;
//	}else{
//		return num2;
//	}
//}

//qn3


//qn4

float velocityCalc(float v, float u, float a, float t){
	if(isnan(v)){
		return u+ a*t;
	}
	else if(isnan(u)){
		return v - a*t;
	}
	else if(isnan(a)){
		return (v-u)/t;
	}
	else if(isnan(t)){
		return (v-u)/a;
	}
}

int main(){
	float v, u , a, t;
	printf("%f",velocityCalc(NAN, 2, 3, 4));
}

