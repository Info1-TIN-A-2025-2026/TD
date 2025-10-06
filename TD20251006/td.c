#include <stdio.h> // printf / scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23;
	unsigned char num_chairs = 32;

	short delta = 0;

	delta = num_students - num_chairs;

	bool sw1 = true; // 1  (false=0)
	bool sw2 = true; // 1

	unsigned char state = 0;

	state = sw1 + (sw2 << 4);

	// printf
	// 1 arg : format
	//    => simple string "hello"
	//    => combination " x=%d"
	//       %d format base 10 (signed),
	//       %u base 10 unsigned
	//       %hd base 10 signed short

	printf("Number of students = %u\n", num_students); // Number of students = 23
	printf("Number of students = %u, Number of chairs = %u\n", num_students, num_chairs);

	printf("∆=%hd\n", delta);

	printf("sw1=%d\n", sw1);
	printf("sw2=%d\n", sw2);

	printf("state=%X (base 16)\n", state);
	printf("state=%d (base 10)\n", state);
	printf("state=%o (base 8)\n", state);

	char a = 'A'; // ASCII code of 'A'=65
	printf("a=%d\n", a); // a=65
	printf("a=%c\n", a); // a=A

	char b = 112; // ASCII code 'p'
	printf("b=%c\n", b); 

	return 0;
}