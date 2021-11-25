/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:32:24 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/25 15:33:26 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_last_index(char *str)
{
	char	*re;
	int		i;

	re = malloc(sizeof(char));
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
