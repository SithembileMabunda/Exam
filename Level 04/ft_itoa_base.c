/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:20:48 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/14 12:31:49 by smabunda         ###   ########.fr       */
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

char	*ft_itoa_base(int nbr, int base)
{
	int		len;
	char	*result;
	long	temp;
	char	*str = "0123456789ABCDEF";

	len = number(nbr);
	temp = nbr;
	if (nbr < 0)
	{
		if (base == 10)
			len++;
		temp = -temp;
	}
	result = (char *)malloc(sizeof(char) * len);
	result[len] = '\0';
	len--;
	while (temp)
	{
		result[len] = str[temp % base];
		len--;
		temp = temp / base;
	}
	if (nbr < 0 && base == 10)
		result[0] = '-';
	return (result);
}

int		main(void)
{
	char *result;

	result = ft_itoa_base(-55, 16);
	printf("%s\n", result);
	return (0);
}
