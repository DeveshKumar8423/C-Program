//pointer arithmatic program
#include<stdio.h>

int main(){
    int age = 23;
    int _age = 24;
    int *ptr = &age;
    int *_ptr =&_age;

    printf("%u %u diffrerence = %u \n " , ptr , _ptr , ptr - _ptr );
    _ptr = &age;

    printf("comparision = %u \n" , ptr == _ptr);
    return 0;
}