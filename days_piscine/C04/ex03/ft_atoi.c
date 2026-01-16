/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:51:32 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/16 11:28:35 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

int	ft_atoi(char *str)
{
	int	num;

	while (*str == ' ' && *str)
		str++;
	num = 1;
	if (*str == '-')
		num *= -1;
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = num * 10 + (*str - '0');
	}
	return (num);

}

int	main(int argc, char **argv)
{
	printf("this is num: %i\n", ft_atoi(argv[1]));
	return (0);
}
