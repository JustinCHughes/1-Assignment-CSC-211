#include <stdio.h>

int main()
{
	int a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("a / b / c: %d\n", a / b / c);
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("(a / b) / c: %d\n", (a / b) / c);
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("7 + c * -- d / e: %d\n", 7 + c * -- d / e);
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("7 + ((C * (-- d)) / e): %d\n", 7 + ((c * (--d)) / e));
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("2 * a % -b + c + 1: %d\n", 2 * a % - b + c + 1);
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("39 / - ++ e - + 29 % c: %d\n", (39 / - ++ e - + 29 % c));
	
	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("a += b += c += 1 + 2: %d\n", a += b += c += 1 + 2);

	a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("7 - + ++ a % (3 + b): %d\n", 7 - + ++ a % (3 + b));

	return 0;
}
