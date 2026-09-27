#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    fgets(s, 100, stdin);

    while(s[i] != '\0' && s[i] != '\n')
        i++;

    printf("%d", i);

    return 0;
}