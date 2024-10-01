#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,n;
	srand(time(NULL));
	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you want to see? ");
	scanf("%d", &n);
	for(i = 0; i < n; ++i)
	{
		if (i % 10 == 0)
			putchar('\n');
		printf("%7d ", rand());
	}
	printf("\n\n");
	return 0;
}

