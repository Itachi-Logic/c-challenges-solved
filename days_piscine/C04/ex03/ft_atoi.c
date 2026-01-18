/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:51:32 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/18 09:45:19 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include  <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - '0');
	return (num * sign);
}
/*
int	main(int argc, char **argv)
{
	printf("this is num: %i\n", ft_atoi(argv[1]));
	return (0);
}
*/
