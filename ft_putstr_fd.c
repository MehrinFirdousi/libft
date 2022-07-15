/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:29:34 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/15 16:29:34 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "io.h" // 	REMEMBER TO REMOVE AND ADD UNISTD TO LIBFT.H

void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}