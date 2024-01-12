//Armstrong Number using Functions
#include<stdio.h>

int numberofdigits(int num)
{
    int count = 0;
    while(num!=0)
    {
        num = num/10;
        count++;
    }
    return count;
}

int expo(int a , int b)
{
    int p = 1;
    for(int i = 1 ; i <= b ; i++)
    {
        p = p * a;
    }
    return p;
}

int calculation(int num)
{
    int numdigit , d , sum = 0;
    numdigit = numberofdigits(num);
    while(num!=0)
    {
        d = num % 10;
        sum = sum + expo(d , numdigit);
        num  = num / 10;
    }
    return sum;
}

int isarmstrong(int num)
{
    if(num == calculation(num))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    printf("Input your Number : ");
    scanf("%d", &num);
    int result = isarmstrong(num);
    if(result == 1)
    {
        printf("%d is an armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an armstrong number.\n", num);
    }
    return 0;
}

