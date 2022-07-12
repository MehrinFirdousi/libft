/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:40:23 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/12 20:25:35 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dst[i])
		i++;
	dest_len = i;
	j = 0;
	while ((i < dstsize - 1) && src[j])
		dst[i++] = src[j++];
	if (dstsize > 0)
		dst[i] = 0;
	while (src[j])
		j++;
	return (dest_len + j);
}
