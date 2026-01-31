/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:42:43 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/31 11:05:13 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

double	ft_fabs(double g)
{
	if (g < 0)
		return (g *= -1);
	return (g);
}

int	ft_sqrt(int nb)
{
	double	nextg;
	double	g;
	double	nbr;

	nbr = (double) nb;
	if (nbr <= 0)
		return (0);
	g = nbr / 2.0;
	nextg = (g + (nbr / g)) / 2.0;
	while (ft_fabs(g - nextg) > 0.0001)
	{
		g = nextg;
		nextg = (g + (nbr / g)) / 2.0;
	}
	if ((int) nextg * (int) nextg != nbr)
		return (0);
	return (nextg);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("%i\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
