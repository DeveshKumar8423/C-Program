//program to calculate the area of different shapes
#include <stdio.h>
#include <string.h>

float areaoftriangle(float a, float b) {
    float area;
    area = 0.5 * a * b; // area of triangle
    return area;
}

float areaofsquare(float c) {
    float area;
    area = c * c; // area of square
    return area;
}

float areaofcircle(float d) {
    float area;
    area = 3.14 * d * d; // area of circle
    return area;
}

float areaofrectangle(float e, float f) {
    float area;
    area = e * f; // area of rectangle
    return area;
}

int main(){
    int condition = 1;
    char shape[20], check[20];
    float base, height, side, radius, length, width;
    float total_area = 0;

    while (condition == 1) {
        printf("Enter the shape for which you want to calculate the area: ");
        scanf("%s", shape);

        if (strcmp(shape, "square") == 0){
            printf("Input side: ");
            scanf("%f", &side);
            float square_area = areaofsquare(side);
            total_area += square_area;
            printf("Area of square is: %f\n", square_area);

        } else if (strcmp(shape, "rectangle") == 0){
            printf("Input length and width: ");
            scanf("%f %f", &length, &width);
            float rectangle_area = areaofrectangle(length, width);
            total_area += rectangle_area;
            printf("Area of rectangle is: %f\n", rectangle_area);

        } else if (strcmp(shape, "circle") == 0){
            printf("Input radius: ");
            scanf("%f", &radius);
            float circle_area = areaofcircle(radius);
            total_area += circle_area;
            printf("Area of circle is: %f\n", circle_area);

        } else if (strcmp(shape, "triangle") == 0){
            printf("Input base and height: ");
            scanf("%f %f", &base, &height);
            float triangle_area = areaoftriangle(base, height);
            total_area += triangle_area;
            printf("Area of triangle is: %f\n", triangle_area);
        }

        printf("Do you want to add more shapes (yes/no): ");
        scanf("%s", check);

        if (strcmp(check, "no") == 0) {
            condition = 0;
        }
    }

    printf("Total area of all shapes: %f\n", total_area);

    return 0;
}