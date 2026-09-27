#include <stdio.h>

int main() {
    char s[100];
    int i;

    fgets(s, 100, stdin);

    for(i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
            printf("%c", s[i]);
    }

    return 0;
}