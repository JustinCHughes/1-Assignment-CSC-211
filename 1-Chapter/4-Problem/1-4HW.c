#include <stdio.h>

int main()
{
	double miles = 26;
	double yards = 385;

	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);

	printf("\nA marathon is %f kilometers. \n\n", kilometers);

}
