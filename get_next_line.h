/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:27:29 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/07 08:09:07 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1048
# endif

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>
# include <errno.h>
# include <libgen.h>
# include <stdlib.h>

char	*get_next_line(int fd);
void	ft_putstr(char *str);
char	*str_catnew(char *str, char c);
int		ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *str1, char *str2);

#endif