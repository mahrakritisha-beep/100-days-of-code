//Write a program to find the LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the larger number
    int larger = (num1 > num2) ? num1 : num2;

    // Find the LCM
    for (int i = larger; i <= num1 * num2; i += larger) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}