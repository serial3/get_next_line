/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:20 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/18 20:28:44 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{	
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*new;
	int		a;
	int		b;

	new = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	a = 0;
	while (str1 && str1[a])
	{
		new[a] = str1[a];
		a++;
	}
	b = 0;
	while (str2[b])
	{
		new[a++] = str2[b];
		if (str2[b] == '\n')
			break ;
		b++;
	}
	new[a] = '\0';
	if (str1)
		free(str1);
	return (new);
}

int	buff_check(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (str[a])
	{
		if (c == 0 && str[a] == '\n')
			c = 1;
		else if (c)
			str[b++] = str[a];
		str[a++] = 0;
	}
	return (c);
}
