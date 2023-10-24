//print the sum of first n natural numbers
#include<stdio.h>

int main(){

    int n , sum =0;
    printf("Input number :");
    scanf("%d" , &n);

    for(int i=0 ; i<=n ; i++){
        sum=sum+i;
    }
    printf("Sum of first n natural %d \n" , sum);

    return 0;
}