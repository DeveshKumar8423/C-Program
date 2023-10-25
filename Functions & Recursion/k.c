#include<stdio.h>

int fib(int n);

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Fibonacci %d: %d\n", n, fib(n));
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        int fib1 = fib(n-1);
        int fib2 = fib(n-2);
        int fibn = fib1 + fib2;
        printf("fib of %d is %d\n", n, fibn);
        return fibn;
    }
}