/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:26:33 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/09 11:21:22 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buffer;

	buffer = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (buffer);
}
/*
int	main(void)
{
	char	*src;
	char	dest[12] = "";

	src = "boutayeb";
	ft_strncat(dest, src, 3);
	printf("this is new dest: %s\n", dest);
	return (0);
}
*/
