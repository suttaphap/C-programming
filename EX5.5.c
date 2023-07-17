#include <stdio.h>
#include <string.h>

#define MAXCHAR 32


/* functions */
char* strnCpy(char*, char*, const size_t);
char* strnCat(char*, char*, const size_t);
int strnCmp(const char*, const char*, const size_t);



char* strnCpy(char* s, char* t, const size_t n)
{
	char* p = s; //to store initial address of s
	size_t i;
	for (i = 0; i < n; i++)
		if (*t != 0)
			*s++ = *t++;
	*s = '\0';
	return p; // if return s it will point start at \0 and show nothing

}

char* strnCat(char* s, char* t, const size_t n)
{
	char* p = s;
	size_t i;
	for (; *s != '\0'; s++)
		;
	for (i = 0; i < n; i++)
		*s++ = *t++;
	*s = '\0';
	return p;
}

int strnCmp(const char* s, const char* t, const size_t n)
{
	size_t i;
	for (i = 0; i < n; i++, s++, t++) {
		if (*s != *t) {
			return *s - *t;
		}
	}
	return 0;
}

main(void)
{
	char ans[MAXCHAR];

	printf("%s\n", strnCpy(ans, "copyme", 4));
	printf("%s\n", strnCat(ans, "concatenate", 4));
	printf("%i\n", strnCmp("samee", "same", 4));
	printf("%i\n", strnCmp("samee", "samea", 5)); //101 - 97 > 0


}
