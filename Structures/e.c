//functions in structure
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1 );

int main(){

    struct student s1 = {23 , 9.4 , "Devesh"};
    printinfo(s1);
    return 0;
}

void printinfo(struct student s1) {

    printf("Student information : \n");
    printf("student name = %s \n" , s1.name);
    printf("student roll = %d \n" , s1.roll);
    printf("student cgpa = %f \n" , s1.cgpa);


}