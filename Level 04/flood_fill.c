/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 08:23:41 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/01 08:38:04 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	flood_filler(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
}

void	flood_filler(char **tab, char colour, t_point size, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (x > size.x || y > size.y)
		return ;
	if (tab[y][x] != colour)
		return ;
	tab[y][x] = 'F';
	flood_filler(tab, colour, size, x + 1, y);
	flood_filler(tab, colour, size, x - 1, y);
	flood_filler(tab, colour, size, x, y + 1);
	flood_filler(tab, colour, size, x, y - 1);
}
