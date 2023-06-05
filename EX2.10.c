#include <stdio.h>


void UppertoLower(char *str) {
	int i = 0;
	while (str[i] != '\0'){
		str[i] >= 'A' && str[i] <= 'Z' ? str[i]+=32 : str[i];
	    i++;
	}
}

void main() {
	char a[] = "ThEZuNIs";
	UppertoLower(a);
	printf("%s", a);
}
