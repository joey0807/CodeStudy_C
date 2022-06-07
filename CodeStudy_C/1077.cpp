#include <stdio.h>

int main()
{
	int a, b = 0;
	scanf("%d", &a);
	do
	{
		printf("%d\n", b);
		b += 1;
	} while (b < a + 1);

	return 0;
}