//malloc function program
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 4;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0 ; i<5 ; i++){
        printf("%d\n" , ptr[i]);
    }
    return 0;
}
