/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_v2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:09:23 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/02 17:21:39 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

static double	ft_fabs(double g)
{
	if (g < 0)
		return (g *= -1);
	return (g);
}

static double	ft_sqrt(double nb)
{
	double	nextg;
	double	g;

	if (nb <= 0)
		return (0);
	g = nb / 2.0;
	nextg = (g + (nb / g)) / 2.0;
	while (ft_fabs(g - nextg) > 0.0001)
	{
		g = nextg;
		nextg = (g + (nb / g)) / 2.0;
	}
	return (nextg);
}

int	ft_is_prime(int nb)
{
	int		i;
	double	limite;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	limite = ft_sqrt(nb);
	i = 5;
	while ((double) i <= limite)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("this is: %i\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/
