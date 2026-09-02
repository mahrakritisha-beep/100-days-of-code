//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("enter 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b==c && c == a )
    {
        printf("equilateral");
    }
   else if (a == b || b == c || a == c)
{
    printf("isosceles");
}
else 
{
    printf("scalene");
}
return 0;
}