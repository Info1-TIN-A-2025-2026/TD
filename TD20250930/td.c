#include <stdio.h>

int main(int argc, const char *argv[])
{
	const double G = 6.67E-11;
	double m1 = 0.;
	double m2 = 0.;
	double r = 0.;
	printf("Enter the mass m1 in [kg]: ");
	scanf("%lf", &m1);
	if (m1 <= 0)
	{
		puts("Error: mass m1 must be positive.");
		return 1;
	}
	printf("Enter the mass m2 in [kg]: ");
	scanf("%lf", &m2);
	if (m2 <= 0)
	{
		puts("Error: mass m2 must be positive.");
		return 2;
	}
	printf("Enter the distance r in [m]: ");
	scanf("%lf", &r);
	if (r <= 0)
	{
		puts("Error: distance must be positive.");
		return 3;
	}

	double f = G * m1 * m2 / (r * r);
	printf("F=%+.2le\n", f);
}