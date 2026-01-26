/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:45:23 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/26 21:58:03 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	count;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	count = nb * ft_recursive_power(nb, power - 1);
	return (count);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	printf("%i\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
