#include <stdio.h>

int main() {
    int n, a[100], k;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int negative = 0;

        for(int j = i; j < i + k; j++) {
            if(a[j] < 0) {
                negative = a[j];
                break;
            }
        }

        printf("%d", negative);

        if(i < n - k)
            printf(" ");
    }

    return 0;
}