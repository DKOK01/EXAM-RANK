#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		if ((octet >> i) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
	printf("\n");
}

// int main()
// {
// 	unsigned char octet = 2;//00000010
// 	print_bits(octet);
// 	return 0;
// }
