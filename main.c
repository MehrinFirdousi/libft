/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:45:22 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/12 20:32:47 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

void freeList(t_list *head) {if (head) freeList(head->next); free(head);}

void delfunc(void *content)
{
	*(int *)content = 1111;
}
int	main(int argc, char **argv)
{
	int a = 7, b = 6, c = 5, d = 224, e = 0, f = 393;
	t_list *list = 0;
	ft_lstadd_front(&list, ft_lstnew(&a));	
	ft_lstadd_front(&list, ft_lstnew(&b));
	ft_lstadd_front(&list, ft_lstnew(&c));
	ft_lstadd_front(&list, ft_lstnew(&d));
	ft_lstadd_front(&list, ft_lstnew(&e));
	ft_lstadd_front(&list, ft_lstnew(&f));

	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_back(&list, ft_lstnew(&d));

	for (t_list *node = list; node; node = node->next)
		printf("%d, %x\n", *(int *)(node->content), node);
	int i = 0;
	ft_lstclear(&list, delfunc);
	if (!list)
		printf("list is null");
	else
		for (t_list *node = list; node && i < 10; node = node->next, i++)
			printf("^ %d, %x\n", *(int *)(node->content), node);
	freeList(list);
	return (0);
}
