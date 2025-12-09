/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 22:00:48 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/09 22:14:11 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_comb2(void)
{
	int	num98;
	int	num99;

	num98 = 0;
	while (num98 <= 98)
	{
		num99 = num98 + 1;
		while (num99 <= 99)
		{
			ft_putchar((num98 / 10) + 48);
			ft_putchar((num98 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((num99 / 10) + 48);
			ft_putchar((num99 % 10) + 48);
			if (num98 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num99++;
		}
		num98++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
