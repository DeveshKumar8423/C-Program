//basic file program fgetc
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Apple" , "r");

    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));

    fclose(fptr);

    return 0;
}
