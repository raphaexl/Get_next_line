/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nextline.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 04:12:44 by ebatchas          #+#    #+#             */
/*   Updated: 2018/10/25 06:38:56 by ebatchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE	100000

# include <sys/types.h>
# include <sys/uio.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);
int		ft_new_line(t_list **lst, char **line);
int		ft_fill_list(t_list **lst, char **line, int *ret);
int		ft_find_fd(t_list *lst, const int fd);
char	*ft_process_str(char *str, int *ret);
#endif
