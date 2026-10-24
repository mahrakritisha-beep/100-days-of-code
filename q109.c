#include <stdio.h>

int main() {
    int n, a[100], k;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if(k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    int sum = 0;

    for(int i = 0; i < k; i++)
        sum += a[i];

    int max = sum;

    for(int i = k; i < n; i++) {
        sum = sum + a[i] - a[i - k];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}