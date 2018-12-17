#include <stdio.h>

int main()
{
	int i, nwhite = 0, nother = 0;
	int ndigit[10] = { 0 };

	int c;
	while ((c = getchar()) != EOF) {
		switch (c) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			ndigit[c - '0']++;
			break;
		case ' ': case '\n': case '\t':
			nwhite++;
			break;

		default:
			nother++;
			break;
		}
	}
	printf("\ndigits:\n");
	for (i = 0; i < 10; i++) printf("'%d' = %d\n", i, ndigit[i]);
	printf("white space = %d\nother =  %d\n", nwhite, nother);
	return 0;
}


