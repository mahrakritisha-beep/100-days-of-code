#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, start = 0, end;

    fgets(s, 200, stdin);

    for(i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            end = i - 1;

            while(end >= start)
                printf("%c", s[end--]);

            if(s[i] == ' ')
                printf(" ");

            start = i + 1;

            if(s[i] == '\n' || s[i] == '\0')
                break;
        }
    }

    return 0;
}