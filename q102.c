#include <stdio.h>

int main() {
    int n, a[100], x;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    int low = 0, high = n - 1, ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d", ans);

    return 0;
}