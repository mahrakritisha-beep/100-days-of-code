//Write a program to take a number as input and print its equivalent binary representation
#include <stdio.h>
int main ()
{
    int n, binary=0, remainder, place=1;
    printf("enter n: ");
    scanf("%d", &n);
    while (n !=0)
    {
        remainder = n%2;
        binary += remainder*place;
        n /= 2;
        place *= 10;

    }
    printf("binary representation is: %d\n", binary);
    return 0;
}