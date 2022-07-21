#include <stdio.h>

unsigned char Get4Bits(int value)
{
	return value%16;
}

int main(void)
{
	int Value;
	unsigned char _Low;

	Value = 0x49;
	_Low=Get4Bits(Value);
	printf("Value=%02X, _Low=%02X\n", Value, _Low);
	return 0;
}
