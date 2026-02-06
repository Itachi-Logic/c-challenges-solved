/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:02:42 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/02 20:27:36 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

static int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("this is: %i\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
