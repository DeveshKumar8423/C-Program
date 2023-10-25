//program to convert celsius into farenheit
#include<stdio.h>

int convertTemp(float celsius);

int main(){
    float far = convertTemp(300);
    printf("Farenheit : %f" , far);
    return 0;
}

int convertTemp(float celsius){
    float far = celsius * (9/5) +32 ;
    return far;
}