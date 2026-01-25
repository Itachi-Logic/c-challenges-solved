/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_revn_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:42:37 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/01 21:42:40 by Itachi-Logic     ###   ########.fr       */
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
