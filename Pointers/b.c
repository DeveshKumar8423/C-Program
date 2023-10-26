//basic pointer program
#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    //address
    printf("%p \n" , &age);
    printf("%u \n" , &age);
    return 0;
}