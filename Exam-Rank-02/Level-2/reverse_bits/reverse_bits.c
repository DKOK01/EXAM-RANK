unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed = 0;
	int i = 0;

	while (i < 8)
	{
		reversed = (reversed << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (reversed);
}
// #include <stdio.h>

// int main(void)
// {
// 	unsigned char value = 65; // Binary: 0100 0001
// 	unsigned char result = reverse_bits(value);

// 	printf("Reversed: %u\n", result); // Should print 130 (Binary: 1000 0010)

// 	return 0;
// }
