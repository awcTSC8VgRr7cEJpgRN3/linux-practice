#include <stdio.h>

int len(char *buffer)
{
	int i=0;
	while(buffer[i]!='\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char Start[]="Hello, this is my first program!";
	int Len;
	Len = len(Start);
	printf("string=%s\n", Start);
	printf("length=%d\n", Len);
	return 0;
}
