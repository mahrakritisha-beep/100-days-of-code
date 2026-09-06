//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int binaryNum, decimalNum = 0, base = 1, remainder, onesComplement = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    // Convert binary to decimal
    int tempBinary = binaryNum;
    while (tempBinary != 0) {
        remainder = tempBinary % 10;
        decimalNum += remainder * base;
        base *= 2;
        tempBinary /= 10;
    }

    // Find the 1's complement
    int tempDecimal = decimalNum;
    int position = 0;
    while (tempDecimal != 0) {
        remainder = tempDecimal % 2;
        if (remainder == 0) {
            onesComplement += (1 << position);
        }
        position++;
        tempDecimal /= 2;
    }

    printf("1's complement of binary number %d is: %d\n", binaryNum, onesComplement);

    return 0;
}