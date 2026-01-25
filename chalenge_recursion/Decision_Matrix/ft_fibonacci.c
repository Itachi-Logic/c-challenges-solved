/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:05:16 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/04 22:30:21 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fib(int n)
{
	int	result;

	if (n <= 1)
		return (n);
	result = ft_fib(n - 1) + ft_fib(n - 2);
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("fibo(%i) = %i", atoi(argv[1]), ft_fib(atoi(argv[1])));
	printf("\n");
	return (0);
}
