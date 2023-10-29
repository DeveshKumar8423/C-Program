//program to store the data of 3 students
#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

    struct student s1;
    s1.roll = 223;
    s1.cgpa = 9.3;
    strcpy(s1.name , "devesh");

    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);

    struct student s2;
    s1.roll = 123;
    s1.cgpa = 5.3;
    strcpy(s1.name , "paras");

    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);

    struct student s3;
    s1.roll = 243;
    s1.cgpa = 5.6;
    strcpy(s1.name , "ravi");

    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);

    return 0;
}