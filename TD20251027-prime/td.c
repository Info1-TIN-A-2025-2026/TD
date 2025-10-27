#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	const unsigned int I_MIN = 2;
	const unsigned int I_MAX = 100;

	printf("Prime numbers between in [%u...%u] :\n", I_MIN, I_MAX);

	for (unsigned int i = I_MIN; i <= I_MAX; i++)
	{
		bool is_prime = true;

		for (unsigned int j = I_MIN; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break; // exit for loop now.
			}
		}

		if (is_prime)
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}
