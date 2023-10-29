//basic file program
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Apple" , "r");
    fclose(fptr);

    return 0;
}
