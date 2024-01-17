//program to find number and its frequency in array 
#include<stdio.h> 

int main(){ 
    int num[] ={ 1, 5, 2, 0, 8, 6, 3, 5, 0}; 
    int n, i, count ; 
    printf("\nEnter an element to search: "); 
    scanf("%d", &n) ; 
    count = 0 ; 
    for(i = 0; i<=9 ; i++){
        if(num[i] == n){
            count++; 
        }
    }
    printf("Number %d is found %d time(s) in the array\n", n, count) ; 
    return 0;
}