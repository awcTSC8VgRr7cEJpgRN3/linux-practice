#include <stdio.h>

int Positive(int *x, int n)
{
	int i=0;
	for(int j=0;j<n;j++)
	{
		if(x[j]>0)
		{
			i++;
		}
	}
	return i;
}

int main(void)
{
	int n = 6;
	int Pos;
	int Start[]={100, -101, 0x2120, 0, 0xE605, 4};
	Pos = Positive(Start, n);
	printf("Pos = %d\n", Pos);
	return 0;
}
