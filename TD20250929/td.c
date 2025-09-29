#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds: ");

	int s = 0; // signed int s = 0; // signed is implicit
	scanf("%d", &s);

	if (s < 0)		   // condition 1
	{				   // bloc 1
		puts("Error"); // equ. printf("Error\n");
	}
	else if (s >= 86400) // condition 2
	{					 // bloc 2

		puts("Overflow");
	}
	else 
	{ // bloc 3
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int seconds = 0;

		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		seconds = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u\n", hours,minutes,seconds);
	}
}