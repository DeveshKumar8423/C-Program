//keep taking numbers as input from user until user enters an odd number
#include<stdio.h>

int main(){

    int n;

    do{
        printf("Input number :");
        scanf("%d" , &n);

        if(n%2 !=0){
            break;
        }
    } while(1);
    printf("You entered an odd number");
    return 0;
}