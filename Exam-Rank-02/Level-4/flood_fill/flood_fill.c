#include "flood_fill.h"

void	flood_fill_recursive(char **tab, t_point size, int x, int y, char target)
{
	// 1. Check if the current cell is out of bounds
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	// 2. Check if the current cell matches the target character
	if (tab[y][x] != target)
		return ;
	// 3. Replace the current cell with 'F'
	tab[y][x] = 'F';
	// 4. Recurse for the 4 neighbors
	flood_fill_recursive(tab, size, x + 1, y, target);
	flood_fill_recursive(tab, size, x - 1, y, target);
	flood_fill_recursive(tab, size, x, y + 1, target);
	flood_fill_recursive(tab, size, x, y - 1, target);
}

void 	flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];

	if (target != 'F')
		flood_fill_recursive(tab, size, begin.x, begin.y, target);
}
