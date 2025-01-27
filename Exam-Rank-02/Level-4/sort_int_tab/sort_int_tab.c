void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
// #include <stdio.h>
// int main()
// {
// 	int tab[5] = {5, 4, 3, 2, 1};
// 	sort_int_tab(tab, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}
// 	return 0;
// }
