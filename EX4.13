#include <string.h>
#include <stdio.h>

int left = 0;

void swap(char s[], int i, int j)
{
	char c;

	c = s[i];
	s[i] = s[j];
	s[j] = c;

	return;
}
void reverse(char s[])
{
	int right;
	right = strlen(s) - 1 - left;

	if (left < right) {
		++left;
		reverse(s);
	}
	if (left >= right) {
		--left, ++right;
		return;
	}
	swap(s, left--, right++);

	return;
}

main() {
	char ans[] = "abc";
	reverse(ans);
	printf("%s", ans);
}

