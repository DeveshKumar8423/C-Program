//basic file program to write a text in a file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Apple" , "w");

    fprintf(fptr , "%c" , 'M');
    fprintf(fptr , "%c" , 'A');
    fprintf(fptr , "%c" , 'N');
    fprintf(fptr , "%c" , 'G');
    fprintf(fptr , "%c" , 'O');

    fclose(fptr);

    return 0;
}
