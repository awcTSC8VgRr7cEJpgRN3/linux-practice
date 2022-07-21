#include <stdio.h>

int sum(int n)
{
	int i=0;
	for(int j=1;j<=n;j++)
	{
		i=i+j;
	}
	return i;
}

int main(void)
{
	int n=100, total;
	total = sum(n);
	printf("1+2+...+%d=%d\n", n, total);
	return 0;
}
