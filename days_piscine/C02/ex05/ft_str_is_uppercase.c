/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 20:25:40 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/22 21:06:30 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i += 1;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
	{
		printf("please enter one string!\n");
		return (1);
	}
	result = ft_str_is_uppercase(argv[1]);
	if (result == 0)
		printf("your str is not only uppercase alpha result: %i\n", result);
	else
		printf("your str is only uppercase alpha result: %i\n", result);
	return (0);
}
*/
