#include <stdio.h>

int main()
{
	float num1, num2, num3;
	printf("gimme 3\n");
	scanf("%f%f%f", &num1, &num2, &num3);
	printf("averageis=%f\n",(num1+num2+num3)/3.0);
	return 0;
}
