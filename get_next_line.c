/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:24 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/06 14:03:54 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_last_index(char *str)
{
	char	*re;
	int		i;

	re = (char *)malloc(sizeof(char));
	if (re == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		re = str_appendc(re, str[i]);
		if (str[i] == '\n')
			break ;
		i++;
	}
	return (re);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		temp[BUFFER_SIZE + 1];
	char		*res;
	int			count;

	count = BUFFER_SIZE;
	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	if (fd < 0 || BUFFER_SIZE < 0 || str == NULL)
		return (NULL);
	while (!ft_strchr(str, '\n') && count == BUFFER_SIZE)
	{
		count = read(fd, &temp, BUFFER_SIZE);
		if (count == -1)
			return (NULL);
		else if (count == 0)
			break ;
		temp[count] = '\0';
		str = ft_strjoin(str, temp);
	}
	res = get_last_index(str);
	str += ft_strlen(res);
	return (res);
}
