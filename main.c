/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfirdous <mfirdous@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:45:22 by mfirdous          #+#    #+#             */
/*   Updated: 2022/07/12 19:34:14 by mfirdous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
//int	main(void)
{
	int n = 5;
	char b1[50];
	char b2[50];
	for (int i = 0; i<strlen(argv[1]); i++)
	{
		b1[i] = argv[1][i];
	}
	for (int i = 0; i<strlen(argv[2]); i++)
	{
		b2[i] = argv[2][i];
	}
	//int output1 = ft_strlcat(d1, s1, 30);
	//printf("%s, %s, %d\n", d1, s1, output1);
	int output1 = ft_strlcat(argv[1], argv[2], atoi(argv[3]));
	printf("%s, %s, %d\n", argv[1], argv[2], output1);

/*
	char d2[30] = "byebyebirdie";
	char s2[13] = "helloapple";
	int output2 = strlcat(d2, s2, 30);
	printf("%s, %s, %d\n", d2, s2, output2);
*/
	int output2 = strlcat(b1, b2, atoi(argv[3]));
	printf("%s, %s, %d\n", b1, b2, output2);
	return (0);

}
