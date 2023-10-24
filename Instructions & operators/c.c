//program to check a number is even or odd
//even == 1
//odd ==0
#include<stdio.h>
#include<math.h>

int main(){
    int number;
    printf("Input a number :");
    scanf("%d" , &number);
    printf("%d" , number%2==0);
    return 0;
}