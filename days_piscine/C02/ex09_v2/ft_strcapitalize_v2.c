/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_v2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:44:47 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 19:38:29 by Itachi-Logic     ###   ########.fr       */
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

void	ft_strupcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return ;
}

int	ft_str_is_alphanumeric(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z' )
		return (0);
	return (1);
}

char	*ft_strcapitalize_v2(char *str)
{
	int		flag;
	char	*pointer;

	ft_strlowcase(str);
	flag = 1;
	pointer = str;
	while (*str)
	{
		if (!ft_str_is_alphanumeric(*str))
			flag = 1;
		if (ft_str_is_alphanumeric(*str) && flag == 1)
		{
			ft_strupcase(str);
			flag = 0;
		}
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
	printf("this is new string: %s\n", ft_strcapitalize_v2(argv[1]));
	return (0);
}
*/
