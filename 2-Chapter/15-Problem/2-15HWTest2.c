#include <stdio.h>

int main()
{
	int x, y, z;

	x = (y = 2) + z = 3;

	printf("x = (y = 2) + z = 3: x = %d, y = %d, z = %d\n", x, y, z);

	return 0;
}
