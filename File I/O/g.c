//program - store a student data in a file
//eof program
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("student.txt" , "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name  : ");
    scanf("%s" , name);
    printf("Enter age  : ");
    scanf("%d" , &age);
    printf("Enter cgpa  : ");
    scanf("%f" , &cgpa);
    
    fprintf(fptr , "student name : %s\n" , name);
    fprintf(fptr , "student age : %d\n" , age);
    fprintf(fptr , "student cgpa : %f\n" , cgpa);

    fclose(fptr);
    return 0;
}
