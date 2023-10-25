//program in which recursion is used
#include<stdio.h>

void printhello(int count);

int main(){
    int a;
    printf("Enter number : ");
    scanf("%d" , &a);


    printhello(a);
    return 0;
}

//recursive function
void printhello(int count){

    if(count==0){
        return;
    }

    printf("Hello world \n");
    printhello(count-1);
}