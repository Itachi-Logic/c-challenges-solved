/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:30:34 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/04 22:30:41 by Itachi-Logic     ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s power %s is: %li", argv[1], argv[2], ft_power(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
