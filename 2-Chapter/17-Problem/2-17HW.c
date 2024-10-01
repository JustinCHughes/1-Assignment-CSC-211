#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	a += b += c += 7;

	printf("%d\n", a);

	return 0;
}
