#include <stdio.h>

int Sum(int *x, int n)
{
	int i;
	for(int j=0;j<n;j++)
	{
		i=i+x[j];
	}
	return i;
}

int main(void)
{
	int n=3;
	int sum;
	int x[]={2040,-1222,242};
	sum = Sum(x, n);
	printf("Sum of x = %d\n", sum);
	return 0;
}
