/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 09:29:19 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/24 10:45:19 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int	result;

	if (argc != 2)
	{
		printf("Please enter the number like: 5\n");
		return (1);
	}
	result = ft_recursive_factorial(atoi(argv[1]));
	printf("factorial %i is: %i\n",atoi(argv[1]), result);
	return (0);
}
*/
