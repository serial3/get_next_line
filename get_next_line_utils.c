/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:20 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/14 08:14:23 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*str_appendc(char *str, char c)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (temp == NULL)
		return (NULL);
	i = 0;
	if (str != 0)
	{
		while (str[i] != '\0')
		{
			temp[i] = str[i];
			i++;
		}
		free(str);
	}
	temp[i++] = c;
	temp[i] = '\0';
	return (temp);
}
