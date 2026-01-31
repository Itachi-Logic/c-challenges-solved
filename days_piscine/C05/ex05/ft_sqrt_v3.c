/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_v3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:09:44 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/31 09:05:43 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_solve_helper(int nb, int i)
{
	if (i == (nb / i) && (nb % i) == 0)
		return (i);
	else if (i > nb / i)
		return (0);
	else
		return (ft_solve_helper(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	int	result;

	result = ft_solve_helper(nb, 1);
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
