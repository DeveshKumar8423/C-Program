//program of a function to calculate sum , product , avg of 2 numbers 
#include<stdio.h>

void dowork(int a , int b , int *sum , int *prod , int *avg);

int main(){
    int a ,b ;
    a =3; b= 5;
    int sum , prod ,avg;
    dowork(a ,b ,&sum , &prod , &avg);

    printf("sum = %d , prod = %d  ,avg = %d" ,sum , prod , avg);
    return 0;
}

void dowork(int a , int b , int *sum , int *prod , int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}
