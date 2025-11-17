#include <stdio.h>

double delta(const double a, const double b, const double c);

int main(int argc, const char *argv[])
{
	double a=0.;
	double b=0.;
	double c=0.;
	double result=0.;
	printf("Enter 3 real value: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	result=delta(a, b, c);
	printf("Δ=%lf\n", result);
	return 0;
}

double delta(const double a, const double b, const double c) {

	double r = 0.;
	r = b*b -4. * a * c;
	return r;
}

// double r = 1/2; ⚠️ r=0
// double r = 1./2.; 🟢 r=0.5