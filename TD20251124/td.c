#include <stdio.h>

int f(unsigned int t, int *a, int *b, int *c);

int main(int argc, const char *argv[])
{
	int h=0;
	int m=0;
	int s=0;
	unsigned int t= 1234567;
	printf("address of h=%p\n", &h);
	printf("address of m=%p\n", &m);
	printf("address of s=%p\n", &s);
	int r=f(t, &h, &m, &s);
}

int f(unsigned int t, int *a, int *b, int *c) {
	printf("a=%p\n", a);
	printf("b=%p\n", b);
	printf("c=%p\n", c);

	int h=t/3600;
	int m=(t%3600)/60;
	int s=t%60;

	*a=h;
	*b=m;
	*c=s;

	return 0;
}