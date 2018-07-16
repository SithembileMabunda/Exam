/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:51:52 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/16 16:24:51 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *result;
	int i;

	i = 0;
	if (start < end)
	{
		result = (int *)malloc(sizeof(int) * (end - start));
		while(start < end)
		{
			result[i] = start;
			start++;
			i++;
		}
	}
	if (start > end)
	{
		result = (int *)malloc(sizeof(int) * (start - end));
		while(start > end)
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	if (start == end)
	{
		result = (int *)malloc(sizeof(int));
		result[i] = start;
	}
	return (result);
}

int        main(int n, char **v)
{
    int        a;
    int        b;
    int        i;
    int        max;
    int        *array;

    (void)n;
    a = atoi(v[1]);
    b = atoi(v[2]);
    if (a <= b)
        max = b - a + 1;
    else
        max = a - b + 1;
    array = ft_range(a, b);
    i = 0;
    while (i < max)
    {
        printf("%i ", array[i]);
        i++;
    }
    return (0);
}
