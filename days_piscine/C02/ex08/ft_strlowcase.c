/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:03:05 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 17:06:10 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (pointer);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("please enter one string!\n");
		return (1);
	}
	printf("this is new string: %s\n", ft_strlowcase(argv[1]));
	return(0);
}
*/
