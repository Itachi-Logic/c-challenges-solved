/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:26:08 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/09 10:07:21 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	end;

	end = 0;
	while (dest[end])
		end++;
	while (*src)
	{
		dest[end] = *src;
		src++;
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[13] = "said";

	src = "boutayeb";
	ft_strcat(dest, src);
	printf("this is new dest: %s\nthis is src: %s\n", dest, src);
	return (0);
}
*/
