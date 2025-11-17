/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_sum_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:18:04 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/16 10:01:33 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

long	ft_power(int base, int exp)
{
	if (exp <= 0)
		return (1);
	base = base * ft_power(base, (exp - 1));
	return (base);
}

int	solve_Helper(int x, int n, int i, int current_sum)
{
	long	p;
	int	count_ignore;
	int	count_choose;

	if (current_sum >= x)
	{
		if (current_sum == x)
			return 1;
		else
			return 0;
	}
	p = ft_power(i, n);
	if (p > (x - current_sum))
		return 0;
	count_ignore = solve_Helper(x, n, i + 1, current_sum);
	count_choose = solve_Helper(x, n, i + 1, current_sum + p);
	return (count_ignore + count_choose);
}

int	ft_power_sum_count(int x, int n)
{
	return (solve_Helper(x, n, 1, 0));
}

int	main(int argc, char *argv[])
{
	int	i;
	if (argc != 3)
		return 0;
	i = ft_power_sum_count(atoi(argv[1]), atoi(argv[2]));
	printf("cunt is: %i\n", i);
	return (0);
}
