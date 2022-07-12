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

#include <stdio.h>
#include "libft.h"
#include <string.h>

#define SIZE 10

int	main(int argc, char **argv)
//int	main(void)
{
	int n = 5;

	char d1[30] = "byebyebirdie";
	char s1[13] = "helloapple";
	int output1 = ft_strlcat(d1, s1, SIZE);
	printf("%s, %s, %d\n", d1, s1, output1);

	char d2[30] = "byebyebirdie";
	char s2[13] = "helloapple";
	int output2 = strlcat(d2, s2, SIZE);
	printf("%s, %s, %d\n", d2, s2, output2);
	return (0);
}
