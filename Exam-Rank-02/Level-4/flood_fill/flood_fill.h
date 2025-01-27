#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

typedef struct	s_point
{
	int		x;// colume
	int		y;// rows
}				t_point;

void 	flood_fill(char **tab, t_point size, t_point begin);

#endif
