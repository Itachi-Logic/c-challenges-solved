/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:00:10 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/26 22:21:47 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	count;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	count = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (count);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("%i\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}
*/
