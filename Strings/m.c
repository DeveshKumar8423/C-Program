//program to
#include<stdio.h>

void checkchar (char str[] , char ch);

int main(){
    char str[] = "HelloWorld";
    char ch = 'r';
    checkchar(str , ch);
}

void checkchar (char str[] , char ch){
    for(int i=0 ; str[i] != '\0' ; i++){
        if(str[i] ==ch){
            printf("character is present ");
            return;
        }
    }
    printf("character is not present");
}