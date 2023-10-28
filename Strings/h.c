//using standard library functions
#include<stdio.h>
#include<string.h>

int main(){
    char newname[] = "Apple";
    char oldname[] = "Banana";
    printf("%d" , strcmp(newname , oldname));
    return 0;
}