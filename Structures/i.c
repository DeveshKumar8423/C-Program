//question - make a structure to store bank account info . Also make tha alias for it
#include<stdio.h>

typedef struct bankaccountinfo{
    int accountno;
    char accountname[100];
}acc;

int main(){

    acc account1 = {232232,"axisbank"};

    printf("acc no = %d \n" , account1.accountno);
    printf("acc no = %s \n" , account1.accountname);

    return 0;
}