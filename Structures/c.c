//structure initializing faster
#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

    struct student s1 = {23 , 9.4 , "Devesh"};

    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);


    return 0;
}