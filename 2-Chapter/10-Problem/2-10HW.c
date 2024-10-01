#include <stdio.h>

int main()
{
	int a = 5;
	int b = 5;
	int c;
	printf("The starting value of a is %d\n", a);
	printf("The starting value of b is %d\n\n", b);
	c = a+++b;
	
	printf("Executed c = a+++b;\n\n");
	printf("The value of c is: %d\n", c);
	printf("The ending value of a is: %d\n", a);
	printf("The ending value of b is: %d\n", b);
	printf("The value of b did not increment\n\n");
	return 0;
}
