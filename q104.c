#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = (long long)n * (n + 1) / 2;
    long long x = sqrt(sum);

    if(x * x == sum)
        printf("%lld", x);
    else
        printf("-1");

    return 0;
}