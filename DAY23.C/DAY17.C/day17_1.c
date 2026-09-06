//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    // Find the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Check if it's an Armstrong number
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}