// writeprogram to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, interest, time, simpleinterest, compoundinterest;
    printf("enter principal amount:");
    scanf("%F", &principal);
    printf("enter rate of interest:");
    scanf("%F", &rate);
    printf("enter time in years:");
    scanf("%F", &time);
    simpleinterest = (principal * rate * time) / 100;
    compoundinterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest: %.2f\n", simpleinterest);
    printf("Compound Interest: %.2f\n", compoundinterest);
    return 0;
}
