/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:39:58 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/08 10:51:01 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	brainfuck(char *str)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * 2048);
	while (*str)
	{
		if (*str == '>' || *str == '+')
			ptr++;
		if (*str == '<' || *str == '-')
			ptr--;
		if (*str == '[' && !*ptr)
			while (*str != ']')
				str++;
		if (*str == ']' && !*ptr)
			while (*str != '[')
				str--;
		if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
}
