#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, 100, stdin);

    if(name[0] != ' ')
        printf("%c ", name[0]);

    for(i = 1; name[i] != '\0'; i++)
        if(name[i-1] == ' ' && name[i] != ' ')
            printf("%c ", name[i]);

    return 0;
}