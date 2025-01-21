unsigned char swap_bits(unsigned char octet)
{
    return ((octet << 4) | (octet >> 4));
}

#include <stdio.h>

int main(void)
{
	unsigned char octet = 65; // Example value
	unsigned char swapped = swap_bits(octet);

	printf("Swapped: %d\n", swapped);

	return 0;
}