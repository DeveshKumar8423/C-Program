//Average marks of class
# include <stdio.h> 
int main(){ 
    int avg,sum = 0;
    int i;
    int marks[30];
    for(i = 0; i < 30; i++){
        printf("Enter marks"); 
        scanf("%d", &marks[i]);
    }
    for (i = 0; i<30 ; i++ ) 
    sum = sum + marks[i]; 
    avg = sum / 30;
    printf("Average marks: %d\n", avg);
    return 0;
}