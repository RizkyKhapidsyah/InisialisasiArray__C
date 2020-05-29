#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int x[5] = { 1,2,3,4,5 };
	int i;

	for (i = 0; i <= 4; i++)
	{
		printf("x[%i] default = %i\n", i, x[i]);
	}

	x[2] = 30;
	x[3] = 40;

	puts("");

	for (i = 0; i <= 4; i++)
	{
		printf("x[%i]\t= %i\n", i, x[i]);
	}

	puts("");
	_getch();
	return 0;
}