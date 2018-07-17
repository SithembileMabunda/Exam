/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:24:25 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/17 09:25:36 by smabunda         ###   ########.fr       */
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
			result[i] = end;
			end--;
			i++;
		}
	}
	if (start > end)
	{
		result = (int *)malloc(sizeof(int) * (start - end));
		while(start > end)
		{
			result[i] = end;
			start++;
			i++;
		}
	}
	if (start == end)
	{
		result = (int *)malloc(sizeof(int));
		result[i] = end;
	}
	return (result);
}
