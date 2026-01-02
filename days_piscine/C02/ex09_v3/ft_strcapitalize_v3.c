/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_v3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:39:02 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 19:51:37 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alphanumeric(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z' )
		return (0);
	return (1);
}

char	*ft_strcapitalize_v3(char *str)
{
	int		flag;
	char	c;
	char	*pointer;

	flag = 1;
	pointer = str;
	while (*str)
	{
		c = *str;
		if (ft_str_is_alphanumeric(*str))
		{
			if (flag == 1 && c >= 'a' && c <= 'z')
				*str -= 32;
			else if (flag == 0 && c >= 'A' && c <= 'Z')
				*str += 32;
			flag = 0;
		}
		else
			flag = 1;
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
	printf("this is new string: %s\n", ft_strcapitalize_v3(argv[1]));
	return (0);
}
*/
