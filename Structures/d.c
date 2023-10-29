//pointer to structure
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
    printf("student roll = %d \n" , s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d \n" , (*ptr).roll);//pointer 
    printf("student roll = %d \n" , ptr->roll); // arrow operator


    return 0;
}