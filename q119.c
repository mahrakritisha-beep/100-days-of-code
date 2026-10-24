#include <stdio.h>

int main() {
    int n, a[100];
    int freq[1000] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        if(freq[a[i]] == 1) {
            printf("%d", a[i]);
            return 0;
        }

        freq[a[i]]++;
    }

    return 0;
}