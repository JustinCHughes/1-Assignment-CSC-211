#include <stdio.h>

int main()
{
	int a1, a2, a3, cnt;

	printf("Input three integers: ");
	cnt = scanf("%d%d%d", &a1, &a2, &a3);
	printf("Number of successful conversions: %d\n", cnt);

	return 0;
}
