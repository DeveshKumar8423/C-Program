//question - enter address(houseno , block , city , state) of 5 people
#include<stdio.h>

struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void printadd(struct address add);

int main(){

    struct address add[5];
    //input
    printf("Enter info for person 1 :");
    scanf("%d" , &add[0].houseno);
    scanf("%d" , &add[0].block);
    scanf("%d" , &add[0].city);
    scanf("%d" , &add[0].state);

    printf("Enter info for person 2 :");
    scanf("%d" , &add[1].houseno);
    scanf("%d" , &add[1].block);
    scanf("%d" , &add[1].city);
    scanf("%d" , &add[1].state);

    printf("Enter info for person 3 :");
    scanf("%d" , &add[2].houseno);
    scanf("%d" , &add[2].block);
    scanf("%d" , &add[2].city);
    scanf("%d" , &add[2].state);

    printf("Enter info for person 4 :");
    scanf("%d" , &add[3].houseno);
    scanf("%d" , &add[3].block);
    scanf("%d" , &add[3].city);
    scanf("%d" , &add[3].state);

    printf("Enter info for person 5 :");
    scanf("%d" , &add[4].houseno);
    scanf("%d" , &add[4].block);
    scanf("%d" , &add[4].city);
    scanf("%d" , &add[4].state);

    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);

    return 0;
}

void printadd(struct address add){
    printf("address is : %d , %d , %s , %s \n" , add.houseno , add.block , add.city , add.state);
}