/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 08:58:36 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/12 10:37:01 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_generate_comb(int *comb, int n, int index, int value)
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i] + 48);
			i++;
		}
		if (!(comb[0] == 10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (value < 10)
	{
		comb[index] = value;
		ft_generate_comb(comb, n, index + 1, value + 1);
		value++;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (0 < n && n < 10)
		ft_generate_comb(comb, n, 0, 0);
	return ;
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
*/
