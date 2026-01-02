/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:39:22 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/22 20:12:08 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		printf("Enter str!\n");
		return (1);
	}
	i = ft_str_is_alpha(argv[1]);
	printf("this is: %i\n", i);
	return (0);
}
*/
