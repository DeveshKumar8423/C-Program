//program of  ternary operator
#include<stdio.h>

int main(){
    int number;
    printf("Input number :");
    scanf("%d" , &number);
    number>5 ? printf("greater than 5 \n") : printf("less than 5 \n");
    return 0;
}