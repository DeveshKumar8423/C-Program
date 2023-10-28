//array program to print marks of subject
#include<stdio.h>

int main(){
    int marks[3];

    printf("Enter physics : ");
    scanf("%d" , &marks[0]);

    printf("Enter chemistry : ");
    scanf("%d" , &marks[1]);

    printf("Enter maths : ");
    scanf("%d" , &marks[2]);

    printf("physics = %d , chemistry = %d , maths = %d ", marks[0] , marks[1] , marks[2]);

    return 0;
}
