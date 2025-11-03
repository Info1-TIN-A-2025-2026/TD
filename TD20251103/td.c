#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	const unsigned int BASE = 10;
	
	unsigned int n = atoi(argv[1]);

	unsigned int w = n == 0 ? 1 : 0;

	while (n > 0)
	{
		n /= BASE; // equ. n=n/BASE;
		w++;
	}

	printf("w=%u\n", w);
}