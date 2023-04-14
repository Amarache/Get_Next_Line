/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:33:45 by yamarach          #+#    #+#             */
/*   Updated: 2022/12/14 11:34:05 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef SIZE_MAX
#  define SIZE_MAX 1024
# endif

char	*get_next_line(int fd);

char	*ft_strjoin(char *s1, char *s2);

size_t	ft_strlen(const char *s);

int		if_bn(char *str);

char	*ft_free(char *str);

#endif
