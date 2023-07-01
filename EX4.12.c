#include <stdio.h>

#define MAX_LENGTH 100

char s[MAX_LENGTH];
int i = 0;

void itoa(int n, char s[]) {
    if (n < 0) {
        s[i++] = '-';
        n = -n;
    }
    if (n / 10)
        itoa(n / 10, s);
    s[i++] = n % 10 + '0';
   
}

int main() {
    int number = -12345;
    itoa(number, s);
    s[i] = '\0';
    printf("Number: %s\n", s);
    return 0;
}
