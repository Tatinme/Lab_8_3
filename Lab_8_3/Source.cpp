#include <stdio.h>
#include <conio.h>


int main()
{
	int znaki[128] = { 0 };
	char tekst[10];

	fgets(tekst, 10, stdin);
	fputs(tekst, stdout);

	for (int i = 0; i < 10; i++)
	{
		znaki[tekst[i]]++;
	}

	for (int i = 1; i < 128; i++)
	{
		if (znaki[i] == 0) continue;
		if (i == 32) { printf("\nZnak: spacja: %d", i, znaki[i]); }
		else
		{
			printf("\nZnak: %c: %d", i, znaki[i]);
		}

	}


	_getch();
	return 0;
}


