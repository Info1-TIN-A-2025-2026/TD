#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int n = atoi(argv[1]);
	unsigned int w = 0;

	do {
		w *= 10;
		w += n % 10;
		n /= 10;

	} while (n > 0);
	printf("w=%u\n", w);
}