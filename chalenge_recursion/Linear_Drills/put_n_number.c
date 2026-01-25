/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_n_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:42:20 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/01 21:42:26 by Itachi-Logic     ###   ########.fr       */
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
