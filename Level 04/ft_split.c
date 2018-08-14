/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:04:38 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/08 12:39:54 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_wc(char *str)
{
	int i;
	int wc;

	i = 0;
	wc = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			wc++;
		i++;
	}
	return (wc);
}

char	*ft_strndup(char *str, int n)
{
	char *result;
	int i;

	result = (char *)malloc(sizeof(char) * n + 1);
	if (result == NULL)
		return (NULL);
	if (result)
	{
		i = 0;
		while ((i < n) && str[i] != '\0')
		{
			result[i] = str[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}

char	**ft_split(char *str)
{
	char **result;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	result = (char **)malloc(sizeof(char *) * ft_wc(str) + 1);
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		j = i;
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
			i++;
		if (i > j)
		{
			result[k] = ft_strndup(str + j, i - j);
			k++;
		}
	}
	result[k] = NULL;
	return (result);
}

int		main(void)
{
	char **result;
	int i;

	i = 0;
	result = ft_split("   my name is sithembile mabunda   ");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
