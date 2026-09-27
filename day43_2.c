#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, flag = 1;

    scanf("%s", s);
    n = strlen(s);

    for(i = 0; i < n / 2; i++)
        if(s[i] != s[n-i-1])
            flag = 0;

    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}