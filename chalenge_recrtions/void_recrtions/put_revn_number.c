/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_revn_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:22:40 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/28 21:44:49 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	put_revn_number(int n)
{
	if (n == 0)
	{
		printf("%i\n", n);
		return ;
	}
	printf("%i > ", n);
	put_revn_number(n - 1);
	return ;
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		put_revn_number(atoi(argv[1]));
	return 0;
}
