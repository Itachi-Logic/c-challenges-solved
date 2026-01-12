/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:26:51 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/12 19:34:35 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*idx_str;
	char	*idx_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		idx_str = str;
		idx_find = to_find;
		while (*idx_str == *idx_find && *idx_find)
		{
			idx_find++;
			idx_str++;
		}
		if (*idx_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*find;
	char	*here;
	str = "hello find me";
	find = "find";
	here = ft_strstr(str, find);
	printf("%s\n", here);
	return (0);
}
*/
