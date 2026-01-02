/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 20:12:26 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/22 21:06:41 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	result = ft_str_is_lowercase(argv[1]);
	if (result == 0)
		printf("your str is not only lowercase alpha result: %i\n", result);
	else
		printf("your str is only lowercase alpha result: %i\n", result);
	return (0);
}
*/
