/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moments.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 09:19:31 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/30 10:24:42 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define HOUR 3600
#define MIN 60
#define Day 86400
#define MON 2592000
#define SEC 1

char	ft_itoa(int nbr);

char	*strcat(char *s1, char *s2);

char	*moments(unsigned int dur)
{
	char *result;
	char string[];
	int nbr;

	if (dur >= MIN)
	{
		minute
	}
	else if (dur >= HOUR)
	{
		hour
	}
	else if (dur >= DAY)
	{
		days
	}
	else if (dur >= MON)
	{
		month
	}
	else
		second;
	result = ft_strcat(total, string);
	return (result)
}
