/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:27:10 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/12 20:34:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	char			*end;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	dest += len_d;
	end = dest + (size - len_d - 1);
	while (*src && dest < end)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (len_d + len_s);
}
/*
int	main(void)
{
	unsigned int i;
	char	*src;
	char	dest[11] = "hello ";
	
	src = "said";
	i = ft_strlcat(dest, src, 11);
	printf("%i\n", i);
	printf("this is dest: %s\n", dest);
	return (0);
}
*/
