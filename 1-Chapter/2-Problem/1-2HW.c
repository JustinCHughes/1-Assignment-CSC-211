#include <stdio.h>

int main()
{
	int miles = 26;
	int yards = 385;

	float kilometers;

	kilometers = 1.609 * (miles + yards / 1760);

	printf("\nA marathon is %f kilometers. \n\n", kilometers);
	return 0;
}
