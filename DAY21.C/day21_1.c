//Write a program to swap the first and last digit of a number.
        #include <stdio.h>

int main() {
    int num, first, last, temp, place = 1, result;

    scanf("%d", &num);

    temp = num;
    last = num % 10;

    // Find first digit and its place value
    while (temp >= 10) {
        temp /= 10;
        place *= 10;
    }

    first = temp;

    // Swap first and last digits
    result = num - first * place - last
             + last * place + first;

    printf("%d", result);

    return 0;
}
