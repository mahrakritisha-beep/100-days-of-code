#include <stdio.h>

int main() {
    int n, a[100], k;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int max = a[i];

        for(int j = i + 1; j < i + k; j++) {
            if(a[j] > max)
                max = a[j];
        }

        printf("%d", max);

        if(i < n - k)
            printf(" ");
    }

    return 0;
}
