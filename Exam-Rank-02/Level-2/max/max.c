int		max(int* tab, unsigned int len)
{
	int	i;
	int largest;

	if (len > 0)
	{
		largest = tab[0];
		i = 1;
		while (i < len)
		{
			if (largest < tab[i])
				largest = tab[i];
			i++;
		}
		return (largest);
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	int tab1[] = {4, 0, 4, 2, 1};
// 	int tab2[] = {-3, -1, -7, -8, -2, -5};
// 	int tab3[] = {};
// 	int tab4[] = {42};

// 	printf("Max of tab1: %d\n", max(tab1, 5)); // Expected: 4
// 	printf("Max of tab2: %d\n", max(tab2, 6)); // Expected: -1
// 	printf("Max of tab3: %d\n", max(tab3, 0)); // Expected: 0
// 	printf("Max of tab4: %d\n", max(tab4, 1)); // Expected: 42
// 	return 0;
// }
