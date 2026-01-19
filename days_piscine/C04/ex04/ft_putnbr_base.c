/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:10:30 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/19 19:20:47 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_solve_helper(long nbr, char *base, int len_base)
{
	char	buffer[100];
	long	pwr;
	int	index;
	int	i;

	pwr = 1;
	while (nbr / len_base >= pwr)
		pwr *= len_base;
	i = 0;
	while (pwr >= 1)
	{
		index = nbr / pwr;
		buffer[i++] = base[index];
		nbr %= pwr;
		pwr /= len_base;
	}
	write(1, buffer, i);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len + 1;
		while (base[i])
		{
			if (base[len] == base[i++])
				return (0);
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;

	len_base = ft_is_base_valid(base);
	if (!len_base)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_solve_helper(nb, base, len_base);
}
/*
int	main(int argc, char **argv)
{
	int	nb;

	if (argc != 3)
	{
		printf("Enter the Value and the base like:\n./a.out 1337 \"01\" | cat -e\n");
		return (1);
	}
	nb = atol(argv[1]);
	ft_putnbr_base(nb, argv[2]);
	return (0);
}
*/
