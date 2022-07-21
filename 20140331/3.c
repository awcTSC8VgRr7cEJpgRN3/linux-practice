#include <stdio.h>

int _min(int x, int y, int z)
{
	if(x<=y)
	{
		if(x<=z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if(y<=z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}

int main(void)
{
	int n1, n2, n3, min;
	n1 = -2;
	n2 = 0x1023;
	n3 = 100;
	min = _min(n1, n2, n3);
	printf("min of x, y and z is %d\n", min);
	return 0;
}
