/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 09:42:46 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/18 10:38:11 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	char	dest[50];

	if (argc != 3)
	{
		printf("please enter 2 argument: (src, size)\n");
		return (1);
	}
	printf("this is old dest:%s\n", dest);
	ft_strncpy(dest, argv[1], atoi(argv[2]));
	printf("this is new dest:%s\n", dest);
	return (0);
}
*/
