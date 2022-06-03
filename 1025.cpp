#include <stdio.h>

int main()
{
	int x;
	int a, b, c, d, e;
	scanf("%d", &x);
	a = (x / 10000) * 10000;
	b = ((x - a) / 1000) * 1000;
	c = ((x - a - b) / 100) * 100;
	d = ((x - a - b - c) / 10) * 10;
	e = x - a - b - c - d;
	printf("[%d]\n", a);
	printf("[%d]\n", b);
	printf("[%d]\n", c);
	printf("[%d]\n", d);
	printf("[%d]", e);

	return 0;
}