#include <stdio.h>

int main()
{
	char n = 'a';
	while (n != 'q')
	{
		scanf("%c", &n);
		printf("%c", n);
	}
}