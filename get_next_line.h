/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:27:29 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/25 15:33:25 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1048
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putstr(char *str);
char	*str_appendc(char *str, char c);
int		ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char	*str_join(char *str1, char *str2);

#endif