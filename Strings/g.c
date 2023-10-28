//using standard library functions
#include<stdio.h>
#include<string.h>

int main(){
    char newname[] = "devesh";
    char oldname[] = "gola";
    strcat(newname , oldname);
    puts(newname);
    return 0;
}