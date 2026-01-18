/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:02:39 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/18 11:41:37 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve_helper(int nbr, char *base, int len_base)
{
	char	my_point;

	if (nbr >= len_base)
		ft_solve_helper(nbr / len_base, base, len_base);
	my_point = base[nbr % len_base];
	while (*base != my_point)
		base++;
	write(1, base, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;
	int	i;
	int	j;

	if (*base == 0)
		return ;
	i = 0;
	while (base[i])
	{
		j = 1;
		while (base[j])
		{
			if (base[i] == base[j + i])
				return ;
			j++;
		}
		i++;
	}
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (len_base == 1)
		return ;
	ft_solve_helper(nbr, base, len_base);
}

int	main(void)
{
	int	nb;

	nb = 42;
	ft_putnbr_base(nb, "01");
	return (0);
}
