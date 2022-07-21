#include <stdio.h>

void copy(char *dest, char *src, unsigned int n)
{
	
}

int main(void)
{
	char *src="Hello, this is my first program!";
	char dest[200];
	unsigned int n;

	n = strlen(src)+1;
	copy(dest, src, n);
	printf("src=%d\n", src);
	printf("dst=%d\n", dest);
	return 0;
}
