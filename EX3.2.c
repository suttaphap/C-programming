#include <stdio.h>
#define SIZE 1000

void escape(char s[], char cnv[]);
void invescape(char s[], char cnv[]);

void main(){
	char s[SIZE];
	char cnv[SIZE];
	int c, i;
	i = 0;
	while ((c = getchar()) != EOF) {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	escape(s, cnv);
	printf("%s", cnv);
	printf("\n");
	invescape(s, cnv);
	printf("%s", s);
}

void escape(char s[], char cnv[]) {
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++) {
		switch (s[i]) {
			case '\n':
				cnv[j++] = '\\';
				cnv[j++] = 'n';
				break;
			case '\t':
				cnv[j++] = '\\';
				cnv[j++] = 't';
				break;
			default:
				cnv[j++] = s[i];
				break;
		}
	}
	cnv[j] = '\0';

}

void invescape(char s[], char cnv[]) {
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] == '\\') {
			switch (s[i]) {
			case 'n':
				cnv[j++] = '\n';
				break;
			case 't':
				cnv[j++] = '\t';
				break;
			}
		}
		else {
			cnv[j++] = s[i];
		}
	}
	cnv[j] = '\0';
}
