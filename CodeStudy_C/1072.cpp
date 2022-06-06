#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
label:
	scanf("%d", &m);
	if (n-- != 0)
	{
		printf("%d\n", m);
		goto label;
	}
}