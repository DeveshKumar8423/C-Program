//function program
#include<stdio.h>
void nameste();
void bonjour();

int main(){

    printf("Enter i for indian & f for french :");
    char ch;
    scanf("%c" , &ch);

    if(ch=='i')
    {
        nameste();
    }
    else if (ch=='f')
    {
        bonjour();
    }
    else{
        printf("You entered invalid charactar");
    }

    return 0;
}

void nameste(){
    printf("NAMESTE \n");
}

void bonjour(){
    printf("BONJOUR \n");
}

