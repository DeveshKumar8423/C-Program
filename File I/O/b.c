//basic file program to read a text from file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Apple" , "r");

    char ch;
    fscanf(fptr , "%c" , &ch);
    printf("character = %c\n" , ch);
    fscanf(fptr , "%c" , &ch);
    printf("character = %c\n" , ch);
    fscanf(fptr , "%c" , &ch);
    printf("character = %c\n" , ch);
    fscanf(fptr , "%c" , &ch);
    printf("character = %c\n" , ch);
    fscanf(fptr , "%c" , &ch);
    printf("character = %c\n" , ch);

    fclose(fptr);

    return 0;
}
