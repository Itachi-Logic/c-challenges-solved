/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:00:50 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/11/03 18:00:12 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

long	ft_power(int base, int exp)
{
	if (exp <= 0)
		return (1);
	base = base * ft_power(base, (exp - 1));
	return (base);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s power %s is: %li", argv[1], argv[2], ft_power(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
