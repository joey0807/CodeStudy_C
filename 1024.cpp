#include <stdio.h>

int main()
{
	char w[20];
	scanf("%s", w);

	for (int i = 0; w[i] != '\0'; i++)
	{
		printf("\'%c\'\n", w[i]);
	}
	return 0;
}