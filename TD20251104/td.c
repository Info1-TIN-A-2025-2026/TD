#include <stdio.h>

int main(int argc, char *argv[])
{
	const int I_MIN = 10;
	const int I_MAX = 20;
	int i = 0;

	do {
		int ret = 0;
		printf("Enter an integer value [%d...%d]:", I_MIN, I_MAX);
		ret = scanf("%d", &i);
		if (ret != 1)  {
			while(getchar()!='\n') {}

			// char c = 0;
			// do
			
			// {
			// 	c = getchar();
			// } while (c != '\n');
		}
	} while (i<10 || 20<i);
	printf("i=%d\n", i);
}
