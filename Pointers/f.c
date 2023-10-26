//basic pointer to pointer program
#include<stdio.h>

void square(int n);
void psquare(int *n);

int main(){

    int number = 4;
    square(number);
    printf("Number = %d\n" , number);

    psquare(&number);
    printf("Number = %d\n" , number);
    
    return 0;
}

//call by value
void square(int n){
    n = n*n;
    printf("square = %d\n" , n);
}
//call by reference
void psquare(int *n){
    *n = (*n) * (*n);
    printf("psquare = %d\n" , *n);
}
