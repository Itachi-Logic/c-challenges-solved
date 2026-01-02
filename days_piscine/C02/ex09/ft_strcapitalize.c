/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:12:07 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/23 18:29:26 by Itachi-Logic     ###   ########.fr       */
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

int	ft_str_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

void	ft_strupcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return ;
}

int	ft_str_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*pointer;
	char	c;

	str = ft_strlowcase(str);
	pointer = str;
	if (ft_str_is_lowercase(*pointer))
		ft_strupcase(pointer);
	str++;
	while (*str)
	{
		c = *(str - 1);
		if (!ft_str_is_alpha(c) && !(c >= '0' && c <= '9'))
		{
			if (ft_str_is_lowercase(*str))
				ft_strupcase(str);
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
	printf("this is new string: %s\n", ft_strcapitalize(argv[1]));
	return (0);
}
*/
