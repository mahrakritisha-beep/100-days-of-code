//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float root1, root2, discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}