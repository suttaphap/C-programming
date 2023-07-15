#include <stdio.h>

void strcat(char* s, char* t);

int main() {
    char s[20] = "Hello";
    char t[] = "World!";
    strcat(s, t);
    printf("%s\n", s);  // Output: HelloWorld

    return 0;
}

void strcat(char* s, char* t) {
    while (*s != '\0')
        s++;
    while ((*s++ = *t++) != '\0')
        ;
}
