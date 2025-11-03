/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:08:36 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/11/03 17:42:03 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_factorial(int n)
{
	if (n <= 0)
		return (1);
	n = n * ft_factorial(n - 1);
	return (n);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("factorial %s is: %i", argv[1], ft_factorial(atoi(argv[1])));
	printf("\n");
	return (0);
}


