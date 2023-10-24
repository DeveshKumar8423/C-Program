//program to check a number is greator than 9 and less than 100 (2 digit number)
#include<stdio.h>

int main(){

    int number;
    printf("Input a number :");
    scanf("%d" , &number);
    printf("%d \n" , number>9 && number<100 );

    return 0;
}
