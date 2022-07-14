/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:14:22 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/14 15:14:22 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*newStr;
	int		len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	newStr = malloc((len + 1) * sizeof(char));
	if (!newStr)
		return (0);
	ft_strlcpy(newStr, s, len + 1);
	return (newStr);
}