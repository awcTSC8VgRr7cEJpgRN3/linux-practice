#include <stdio.h>

short _Max(short x, short y)
{
	if(x>=y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main(void)
{
	short x=0x1234, y=0x8001, max;
	max=_Max(x, y);
	printf("max of x, y = %d\n", max);
	return 0;
}
