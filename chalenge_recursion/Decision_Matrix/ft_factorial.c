/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:29:09 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/04 22:29:20 by Itachi-Logic     ###   ########.fr       */
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


