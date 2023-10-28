//program to create a 2D array and store the table of 2 & 3
#include<stdio.h>

void storetable(int arr[][10] ,int n , int m , int number);

int main(){
    int table[2][10];
    storetable(table , 0 , 10 , 2);
    storetable(table , 1 , 10 , 3);

    for(int i=0 ; i<10 ; i++){
        printf("%d \t" , table[0][i]);
    }
    printf("\n");
    for(int i=0 ; i<10 ; i++){
        printf("%d \t" , table[1][i]);
    }
    
    return 0;

}

void storetable(int arr[][10] ,int n , int m , int number){
    for(int i=0 ; i<10 ; i++){
        arr[n][i] = number * (i+1);
    }
}