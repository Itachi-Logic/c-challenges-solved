/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:55:52 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/22 20:09:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
		return (1);
	result = ft_str_is_numeric(argv[1]);
	if (result == 0)
		printf("your string don't contains only digits result is: %i\n", result);
	else
		printf("your string contains only digits result is: %i\n", result);
	return (0);
}
*/
