#include <stdio.h>

int main() {
    char s[100];
    int i, v = 0, c = 0;

    fgets(s, 100, stdin);

    for(i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels=%d, Consonants=%d", v, c);

    return 0;
}