//program to check a number is divisible by 2 or not
#include<stdio.h>
#include<math.h>

int main(){
    int number;
    printf("Input a number :");
    scanf("%d" , &number);
    printf("%d" , number%2==0);
    return 0;
}