/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_v2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:02:39 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/19 15:10:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_solve_helper(long nbr, char *base, int len_base)
{
	if (nbr >= len_base)
		ft_solve_helper(nbr / len_base, base, len_base);
	write(1, &base[nbr % len_base], 1);
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
