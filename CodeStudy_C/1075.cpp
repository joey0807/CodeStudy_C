#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (n != 0)
	{
		printf("%d\n", n-1);
		n--;
	}
	return 0;
}