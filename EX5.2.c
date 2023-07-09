#include <stdio.h>
#include <ctype.h>

#define BUFSIZE  100

/* functions */
int  getch(void);
void ungetch(int);
int  getfloat(double*);

/* global */
int    buf[BUFSIZE];         /* buffer from ungetch (can handle EOF push back) */
int    bufp = 0;             /* next free position in buf */

int getch(void)              /* get a (possibly pushed back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)          /* push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

/* getint: get next integer from input into *pn */
int getfloat(double* pn)
{
	int c, sign;
	double power;

	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();

	if (!isdigit(c) && c != EOF) {
		ungetch(c);
		return 0;
	}

	/* Get the decimal part */
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	
	/* Get the fractional part */
	if (c == '.') {
		c = getch();
	}
	for (power = 1.0; isdigit(c); c = getch()) {
			*pn = 10 * *pn + (c - '0');
			power *= 10;		
	}

	*pn = (sign * *pn)/power;
	if (c != EOF)
		ungetch(c);
	return c;
}

int main(void)
{
	int input;
	double num;

	while ((input = getfloat(&num)) && input != EOF)
		printf("%g\n", num);

	return 0;
}
