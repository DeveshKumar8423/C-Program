//print the factorial of n numbers
#include<stdio.h>

int main(){

    int n , fact =1;
    printf("Input number :");
    scanf("%d" , &n);

    for(int i=1 ; i<=n ; i++){
        fact=fact*i;
    }
    printf("factorial of first n natural numbers is %d \n" , fact);

    return 0;
}