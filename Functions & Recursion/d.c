//function program for writing sum of two numbers
#include<stdio.h>
int sum(int a , int b);

int main(){

    int a , b ;
    printf("Input number 1 :");
    scanf("%d" , &a);
    printf("Input number 2 :");
    scanf("%d" , &b);

    int c = sum(a , b);
    printf("Sum is %d" , c);
    return 0;
}

int sum(int a , int b){
    return a+b;
}