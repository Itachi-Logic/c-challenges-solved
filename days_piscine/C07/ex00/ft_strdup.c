/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:50:09 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/09 19:45:56 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static int	ft_length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_length(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == 0)
		return (dest);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}
/*
int	main(int argc, char *argv[])
{
	char	*p;

	if (argc != 2)
		return (1);
	p = ft_strdup(argv[1]);
	printf("this is call malloc: %s\n", p);
	free(p);
	return (0);
}
*/
