#include<stdio.h>

float rectanglearea(float a , float b);
float circlearea(float radius);
float squarearea(float side);

int main(){

    float a , b , side , radius;

    printf("Enter the length and breadth of rectangle :");
    scanf("%f %f" , &a,&b);

    printf("Enter radius of circle :");
    scanf("%f" , &radius);

    
    printf("Enter side of square :");
    scanf("%f" , &side);

    printf("Area of rectangle is : %f \n" , rectanglearea(a , b));
    printf("Area of square is : %f \n" , squarearea(side));
    printf("Area of circle is : %f \n" , circlearea(radius));

    return 0;
}

float rectanglearea(float a , float b){
    return a*b;
}

float circlearea(float radius){
    return 3.14 * radius * radius;
}

float squarearea(float side){
    return side * side;
}