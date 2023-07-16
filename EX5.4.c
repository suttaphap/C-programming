#include <stdio.h>
#include <string.h>

int strend(char* s, char* t);

int main() {
    char s[] = "HelloWorld";
    char t[] = "World";
    int ans = strend(s, t);
    printf("%d", ans);

    return 0;
}

/* strend: returns 1 if t occurs at the end of s, and zero otherwise */
int strend(char* s, char* t)
{
    for (; *s != *t; s++)
        if (*s == '\0')
            return 0;
    s += strlen(s) - strlen(t); //add to skip when t occur before ending
    for (; *s == *t; s++, t++)
        if (*s == '\0' && *t == '\0')
            return 1;
    return 0;
}

