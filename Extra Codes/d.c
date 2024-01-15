//Macro expansion program
# include <stdio.h> 
# define PI 3.1428 //PI is called micro template whereas 3.1428 is called macro expansion
int main(){ 
float r = 6.25, area; 
area = PI * r * r;
printf ( "Area of circle = %f\n", area ); 
return 0 ; 
}