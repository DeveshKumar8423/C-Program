//typedef keyword in structure
#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu ;

void printinfo(struct student s1 );

int main(){

    stu s1;
    s1.roll = 123;
    s1.cgpa = 5.7;
    strcpy(s1.name , "Devesh");
    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);

    return 0;
}

