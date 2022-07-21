#include <stdio.h>

int ZeroCount(int *x, int n, int *pos, int *neg)
{
	int i=0;
	for(int j=0;j<n;j++)
	{
		if(x[j]>0)
		{
			*pos=*pos+1;
		}
		else if(x[j]<0)
		{
			*neg=*neg+1;
		}
		else
		{
			i++;
		}
	}
	return i;
}

int main(void)
{
	int n = 7;
	int Pos=0;
	int Zero;
	int Neg=0;
	int Start[]={7602, 848, -2120, 0, -605, 4, 0};

	Zero = ZeroCount(Start, n, &Pos, &Neg);
	printf("Zero=%d, Pos.=%d, Negative=%d\n", Zero, Pos, Neg);
	return 0;
}
