#include <stdio.h>

int main()
{
	int i = 0;
	int power = 1;

	while (i++ <= 10)
	{
		printf("%-6d", power *= 2);
		
	}
	printf("\n");
	return 0;
}
