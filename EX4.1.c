#include <stdio.h>
#include <string.h>
main()
{
	char source[] = "the cat the.";
	char pattern[] = "the";

	printf("%d\n", strrindex(source, pattern));

	return 0;
}

int strrindex(char s[], char t[])
{
	int i, j, k;
	int p = -1;
	for (i = 0; s[i] != '\0'; ++i) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
			;
		if (k > 0 && t[k] == '\0')
			p = i;
	}
	return p;
}
