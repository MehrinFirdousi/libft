/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:39:49 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/15 19:39:49 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list 	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = (t_list *)malloc(sizeof(t_list));
	if (newNode)
	{
		newNode->content = content;
		newNode->next = 0;
	}
	return (newNode);
}