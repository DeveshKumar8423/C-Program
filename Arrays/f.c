//basic two dimensional array program
#include<stdio.h>

int main(){
    //2 x 3
    int marks[2][3]; // _ _ _ || _ _ _

    marks[0][0] = 90;
    marks[0][1] = 34;
    marks[0][2] = 43;

    marks[1][0] = 54;
    marks[1][1] = 65;
    marks[1][2] = 76;

    printf("%d"  ,marks[0][2]);
    return 0;
}