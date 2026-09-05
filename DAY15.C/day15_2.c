//Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n, reversed=0, remainder;
    printf("enter n: ");
    scanf("%d", &n);
    while (n !=0)
    {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n /= 10;
    }
    printf("reversed number is: %d\n", reversed);
    return 0;
}