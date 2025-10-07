#include <stdio.h> // printf / scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	long volume = 42; // m3

	printf("volume = [%ld]\n", volume);
	printf("volume = [%7ld]\n", volume);  // right justified
	printf("volume = [%-7ld]\n", volume); // left justified

	printf("volume = [%+ld]\n", volume); // add sign of variable
	printf("volume = [%+7ld]\n", volume);
	printf("volume = [%+-7ld]\n\n", volume);

	long pression = -4; // bar
	printf("pression = [%ld]\n", pression);

	double pi = 3.141592653589793;
	printf("π=[%lf]\n", pi);	// 6 digits after decimal point
	printf("π=[%.2lf]\n", pi);	// 2 digits after decimal point
	printf("π=[%+.2lf]\n", pi); // force sign

	double absolut_zero = -459.67;				// °F
	printf("zero abs=[%.1lf]\n", absolut_zero); // 1 digit after decimal point

	printf("[%+10.2lf]\n", pi);
	printf("[%+10.2lf]\n", absolut_zero);

	double light_speed = 299792458.0;	 // m/s
	printf("[%+10.2lf]\n", light_speed); // shitf if tooo big 🥹

	int num_digits = 3;					   // %.3lf
	printf("π=[%.3lf]\n", pi);			   // 3 digits after decimal point
	printf("π=[%.*lf]\n", num_digits, pi); // num_digits digits after decimal point

	num_digits = 12;
	printf("π=[%.*lf]\n", num_digits, pi); // num_digits digits after decimal point

	int width = 8;
	num_digits = 3;
	printf("π=[%+*.*lf]\n", width, num_digits, pi);		 // num_digits digits after decimal point
}