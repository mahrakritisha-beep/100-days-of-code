#include <stdio.h>

int main() {
    int n, a[100], ans[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int product = 1;

    for(int i = 0; i < n; i++) {
        ans[i] = product;
        product *= a[i];
    }

    product = 1;

    for(int i = n - 1; i >= 0; i--) {
        ans[i] *= product;
        product *= a[i];
    }

    printf("[");

    for(int i = 0; i < n; i++) {
        printf("%d", ans[i]);

        if(i < n - 1)
            printf(",");
    }

    printf("]");

    return 0;
}