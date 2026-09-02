//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}