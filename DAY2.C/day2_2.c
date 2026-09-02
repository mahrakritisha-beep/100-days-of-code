//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main() {
    float radius, circumference, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("Circumference = %.2f\n", circumference);
    printf("Area = %.2f\n", area);

    return 0;
}