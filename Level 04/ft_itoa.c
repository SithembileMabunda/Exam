/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:52:58 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/08 12:01:59 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		number(int nbr)
{
	int i;

	i = 1;
	while (nbr /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*result;
	long	temp;

	len = number(nbr);
	temp = nbr;
	if (nbr < 0)
	{
		temp = -temp;
		len++;
	}
	result = (char *)malloc(sizeof(char) * len);
	result[len] = '\0';
	len--;
	while (temp)
	{
		result[len] = (temp % 10) + 48;
		len--;
		temp = temp / 10;
	}
	if (nbr < 0)
	{
		result[0] = '-';
	}
	return (result);
}

int		main(void)
{
	char *result;

	result = ft_itoa(-55);
	printf("%s\n", result);
	return (0);
}
