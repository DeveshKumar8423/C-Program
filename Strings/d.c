//program that inputs user's name and print its length
//program of string
#include<stdio.h>

int printlength(char arr[]);

int main(){
    char name[100];
    fgets(name , 100 , stdin);
    printf("length is : %d" , printlength(name));
    return 0;
}

int printlength(char arr[]){
    int count =0;
    for(int i=0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count-1;
}