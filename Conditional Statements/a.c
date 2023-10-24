//program of a ternary operator
#include<stdio.h>

int main(){
    int age;
    printf("Input age :");
    scanf("%d" , &age);
    age>=18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}