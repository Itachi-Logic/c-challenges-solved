/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:25:56 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/28 21:20:56 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	recrtion(int n)
{
	if (n == 0)
	{
		printf("%i", n);
		return ;
	}
	recrtion(n - 1);
	printf(" > %i", n);
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2)
		recrtion(atoi(av[1]));
	printf("\n");
	return 0;
}
