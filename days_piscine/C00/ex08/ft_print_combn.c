/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:43:41 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/12/09 20:05:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	is_last_combination(int *array, int n)
{
	int	i;
	int	last_possible_digit;

	last_possible_digit = 10 - n;
	i = 0;
	while (i < n)
	{
		if (array[i] != last_possible_digit + i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_recartion(int *array, int n, int current_index, int start_digit)
{
	int	digit;
	int	i;

	digit = start_digit;
	if (current_index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(array[i] + 48);
			i++;
		}
		if (!is_last_combination(array, n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (digit <= 9)
	{
		array[current_index] = digit;
		ft_recartion(array, n, current_index + 1, digit + 1);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	int	arry[10];

	ft_recartion(arry, n, 0, 0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		fprintf(stderr, "this is number of n: %s\n", argv[1]);
		ft_print_combn(atoi(argv[1]));
	}
	write(1, "\n", 1);
}
*/
