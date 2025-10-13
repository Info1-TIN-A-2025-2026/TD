#include <stdio.h>
#include <math.h>

// standard normal distribution (Abramowitz & Stegun)
double snd(double x)
{
	const double A1 = 0.319381530;
	const double A2 = -0.356563782;
	const double A3 = 1.781477937;
	const double A4 = -1.821255978;
	const double A5 = 1.330274429;
	const double P = 0.2316419;

	if (x >= 0.0)
	{
		double t = 1.0 / (1.0 + P * x);
		double y = 1.0 - (1.0 / sqrt(2.0 * M_PI)) * exp(-x * x / 2.0) *
							 (A1 * t + A2 * pow(t, 2) + A3 * pow(t, 3) + A4 * pow(t, 4) + A5 * pow(t, 5));
		return y;
	}
	else
	{
		return 1.0 - snd(-x);
	}
}

int main()
{
	const double R = 0.05;		// in %
	const double SIGMA = 0.274; // in %
	const unsigned long NUM_DAYS_PER_YEAR = 365;

	double s0 = 0., k = 0., num_days = 0., t = 0.;
	double d1 = 0., d2 = 0.;

	printf("=== Option contract price computation (Black-Scholes model) ===\n");
	printf("Underlying price (USD):      ");
	scanf("%lf", &s0);
	if (s0 <= 0)
	{
		puts("Error, underlying price must be >0.");
		return 1;
	}
	printf("Strike price (USD):          ");
	scanf("%lf", &k);
	if (k <= 0)
	{
		puts("Error, strike price must be >0.");
		return 1;
	}
	printf("Contract expiration (days)): ");
	scanf("%lf", &num_days);
	if (num_days <= 0)
	{
		puts("Error, expiration must be >0.");
		return 1;
	}

	t = num_days / NUM_DAYS_PER_YEAR;

	// Black-Scholes formula
	d1 = (log(s0 / k) + (R + pow(SIGMA, 2) / 2.0) * t) / (SIGMA * sqrt(t));
	d2 = d1 - SIGMA * sqrt(t);

	double call = snd(d1) * s0 - snd(d2) * k * exp(-R * t);
	double put = call - s0 + k * exp(-R * t);

	printf("\n--- Data ---\n");
	printf("Underlying price: %+10.2f USD\n", s0);
	printf("Strike price:     %+10.2f USD\n", k);
	printf("Expiration:       %+7.0f    days\n", num_days);
	printf("\n--- Results ---\n");
	printf("CALL price:       %+10.2f USD\n", call);
	printf("PUT  price:       %+10.2f USD\n", put);

	return 0;
}
