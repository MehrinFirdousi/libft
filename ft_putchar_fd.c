/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:14:00 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/15 16:14:00 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "io.h" // 	REMEMBER TO REMOVE AND ADD UNISTD TO LIBFT.H

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}