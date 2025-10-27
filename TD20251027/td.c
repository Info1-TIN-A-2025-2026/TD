
#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 0
	int a = 0;
	int b = 0;
	int q = 0;
	int r = 0;

	printf("enter a: ");
	scanf("%d", &a);

	printf("enter b: ");
	scanf("%d", &b);

	q = a / b;
	r = a % b;

	printf("a/b = %d\n", q);
	printf("a%%b = %d\n", r); // %% displays '%'
#endif

	int a = 10;
	printf("%d\n", a++);

	// printf("%d\n", a);
	// a++; // post incrementation

	a = 10;
	printf("%d\n", ++a);

	// ++a; // pre incrementation
	// printf("%d\n", a);

	a = 10;
	printf("%d %d %d\n", ++a, ++a, a++); // AVOID multiple ++/-- on the same line :)
	printf("%d\n", a);

	char x = 127;
	x++;

	return 0;
}