/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:27:43 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/17 09:35:35 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j] != '\0')
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	else
		write(1, "\n", 1);
	return (0);
}
