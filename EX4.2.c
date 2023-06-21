#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char s[]);

main()
{
	char s[] = "123.45e-6";

	printf("%g\n", atof(s));
	return 0;
}

double atof(char s[])
{
	double val, power;
	int i, sign;
	int exp_sign = 1;
	int exp;

	for (i = 0; isspace(s[i]); ++i)		/* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e' || s[i] == 'E') {
		i++;
	}
	if (s[i] == '-' || s[i] == '+') {
		i++;
	}
	if (s[i - 1] == '-') {
		val = val / pow(10,(s[i] - '0'));
	}
	if (s[i - 1] == '+') {
		val = val * pow(10, (s[i] - '0'));
	}
	return sign * val / power;
}
