//basic pointer to pointer program
#include<stdio.h>

int main(){
    
    int x =5;
    int *ptr = &x;
    int **pptr =&ptr;

    printf("%d \n" , **pptr);

    return 0;
}