/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:05:34 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/31 11:06:02 by Itachi-Logic     ###   ########.fr       */
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

int	ft_solve_helper(double nb, double g)
{
	double	nextg;

	nextg = (g + (nb / g)) / 2.0;
	if (ft_fabs(g - nextg) < 0.00001)
		return ((int) nextg);
	return (ft_solve_helper(nb, nextg));
}

int	ft_sqrt(int nb)
{
	int	result;

	if (nb <= 0)
		return (0);
	result = ft_solve_helper(nb, nb / 2.0);
	if (result * result != nb)
		return (0);
	return (result);
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
