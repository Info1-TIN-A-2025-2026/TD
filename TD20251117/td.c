#include <stdio.h>

void proc(void); // prototype for proc function
void f1(const int a);

int main(int argc, const char *argv[])
{
	int i=0;
	proc();

	printf("Enter an integer value: ");
	scanf("%d", &i);
	f1(i);
	return 0;
}

void proc(void) {
	puts("🍎 Bonjour !");
	return;
}

void f1(const int a) {
	printf("%d\n", 3*a);
}
