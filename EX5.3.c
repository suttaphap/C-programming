#include <stdio.h>

void strcat(char* s, char* t);

main() {
    char s[20] = "Hello";
    char t[] = "World!";
    strcat(s, t);
    printf("%s\n", s);  // Output: Hello, world!

}

void strcat(char* s, char* t) {
    while (*++s != '\0')
        ;
    while ((*s++ = *t++) != '\0')
        ;
}
