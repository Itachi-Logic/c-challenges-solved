/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:47:53 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 16:57:36 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
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
	printf("this is new string: %s\n", ft_strupcase(argv[1]));
	return(0);
}
*/
