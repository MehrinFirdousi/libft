/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:39:22 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/14 22:39:22 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, char c)
{
	int i;
	int word_found;
	int count;

	i = -1;
	count = 0;
	word_found = 0;
	while (s[++i])
	{
		if (s[i] == c && word_found)
		{
			count++;
			word_found = 0;
		}	
		else if (s[i] != c)
			word_found = 1;
	}
	if (word_found)
		count++;
	return (count);
}

void	add_to_list(char **list, int *wc, char *buf, int *len)
{
	list[*wc] = (char *)malloc((*len + 1) * sizeof(char));
	buf[*len] = 0;
	ft_strlcpy(list[(*wc)++], buf, *len + 1);
}

char	**ft_split(char const *s, char c)
{
	char **list;
	char buf[150];
	int wc;
	int len;
	int i;

	wc = 0;
	len = 0;
	i = -1;
	list = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	while (s[++i])
	{
		if (s[i] == c && len > 0)
		{
			add_to_list(list, &wc, buf, &len);
			len = 0;
		}
		else if (s[i] != c)
			buf[len++] = s[i];
	}
	if (len > 0)
		add_to_list(list, &wc, buf, &len);
	list[wc] = NULL;
	return (list);
}