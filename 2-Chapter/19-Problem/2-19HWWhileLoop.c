#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0,n;
	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you wnt to see? ");
	scanf("%d", &n);
	while(i < n)
	{
		if (i % 10 == 0)
			putchar('\n');
		printf("%7d ", rand());
		++i;
	}
	printf("\n\n");
	return 0;
}

