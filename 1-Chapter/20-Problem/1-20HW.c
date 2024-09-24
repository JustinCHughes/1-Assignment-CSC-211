#include <stdio.h>

int main()
{
	char c1, c2, c3;
	int cnt;

	printf("Input three characters:  ");
	cnt = scanf("%c%c%c", &c1, &c2, &c3);
	
	printf("%c%c%c", c1, c2, c3);
	printf("Number of successful conversions: %d\n", cnt);
}
