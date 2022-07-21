#include <stdio.h>

int MAX(short *x, int n)
{
	int i=x[0];
	for(int j=1;j<=n;j++)
	{
		if(x[j]>i)
		{
			i=x[j];
		}
	}
	return i;
}

int main(void)
{
	int n = 4;
	int _Max;
	short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
	_Max = MAX(x, n);
	printf("Max of x is %04X\n", _Max);
	return 0;
}
