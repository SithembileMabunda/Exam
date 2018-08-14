/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:42:13 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/14 14:34:00 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define HOUR 3600
#define MIN 60
#define DAY 86400
#define MON 2592000
#define SEC 1

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

char    *ft_strcat(char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}

char	*moments(unsigned int dur)
{
	char	*result;
	char	*string;
	int		nbr;
	char	*total;

	if (dur == 0)
		return ("0 seconds ago.");
	if (dur >= MON)
	{
		nbr = dur / MON;
		string = " month ago.";
	}
	else if (dur >= DAY)
    {
        nbr = dur / DAY;
        string = " day ago.";
    }
	else if (dur >= HOUR)
    {
        nbr = dur / HOUR;
        string = " hour ago.";
    }
	else if (dur >= MIN)
    {
        nbr = dur / MIN;
        string = " minute ago.";
    }
	else
	{
		nbr = dur;
		string = " seconds ago.";
	}
	total = (char *)malloc(sizeof(char) * number(nbr));
	total = ft_itoa(nbr);
	result = ft_strcat(total, string);
	return (result);
}

int		main(int ac, char **av)
{
	char *str;
	if (ac == 2)
	{
		str = moments(atoi(av[1]));
		printf("%s", str);
	}
	printf("\n");
	return (0);
}
