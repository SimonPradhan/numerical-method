// Online C compiler to run C program online
#include <stdio.h>
struct student{
    char name[25];
    int roll;\
};

struct student input(){
    fflush(stdin);
    struct student a;
    printf("Enter your name:");
    gets(&a.name);
    printf("Enter your roll no:");
    scanf("%d",&a.roll);
    return a;
}
void sPrint(struct student a){
    printf("Name: %s\nRoll: %d\n",a.name,a.roll);
}
int main() {
    struct student a,b,c;
    a = input();
//    b = input();
//    c = input();
    
    sPrint(a);
//    sPrint(b);
//    sPrint(c);

    return 0;
}

//#include <stdio.h>
//
//#include <stdlib.h>
//
//void main()
//
//{
//
//FILE *fptr;
//
//char filename[]= "file01.txt";
//
//fptr = fopen(filename,"w");
//
//if (fptr == NULL) {
//
//printf("Error creating file %s\n", filename);
//
//exit(-1);
//
//}
//
//else {
//
//printf("Success creating file %s\n",
//filename);
//
//}
//
//fclose(fptr);
//
//}
