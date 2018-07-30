/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:47:15 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/30 15:09:55 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_wstr(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[j] == ' ' || str[j] == '\t')
	{
		while (str[j] != 0 && (str[j] == ' ' || str[j] == '\t'))
			j--;
		ft_putchar(1);
	}

	while (str[j] != 0)
	{
		k = j + 1;
		if (str[j] == ' ' || str[j] == '\t')
			j--;
		while (str[k] != '\0' && (str[k] != ' ' || str[k] != '\t'))
		{
			ft_putchar(str[k]);
			k++;
		}
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
