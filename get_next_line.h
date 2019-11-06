/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 08:21:09 by egiyani           #+#    #+#             */
/*   Updated: 2018/06/20 12:54:06 by egiyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);

#endif
