//function code which writes a table of any number in c
#include <stdio.h>

void printTable(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printTable(num);
    return 0;
}