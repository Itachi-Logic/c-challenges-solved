/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_rev_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:50:16 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/11/03 13:08:03 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	put_rev_alpha(char c)
{
	if (c == 'z' || c == 'Z')
	{
		printf("%c", c);
		return ;
	}
	put_rev_alpha(c + 1);
	printf(" > %c", c);
	return ;
}

int	main(int argc, char *argv[])
{
	if (argc != 2 || !(argv[1][0] == 'a' || argv[1][0] == 'A') || argv[1][1] != '\0')
	{
		printf("Please enter a for lowercase alpha or A for uppercase alpha\n");
		return 1;
	}
	put_rev_alpha(argv[1][0]);
	printf("\n");
	return 0;
}
