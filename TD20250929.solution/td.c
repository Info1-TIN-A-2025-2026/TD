#include <stdio.h>

int main(int argc, const char *argv[])
{
	int s = 0;
	printf("Number of seconds: ");
	scanf("%u", &s);
	if (s < 0)
	{
		printf("Error, s must be >=0\n");
		return 1;
	}
	if (s >= 86400)
	{
		printf("Overflow\n");
		return 2;
	}
	unsigned int hours = s / 3600;
	unsigned int minutes = (s % 3600) / 60;
	unsigned int second = s % 60;
	printf("s=%u => %02u:%02u:%02u\n", s, hours, minutes, second);
	return 0;
}