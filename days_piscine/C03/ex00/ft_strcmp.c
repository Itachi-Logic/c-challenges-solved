/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:25:08 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/06 20:38:50 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
/*
int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int	count;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3)
		return (1);
	
	count = ft_strcmp(str1, str2);
	if (count < 0)
		printf("s1 is less than s2: count = %i\n", count);
	else if (count > 0)
		printf("s1 is greater than s2: count = %i\n", count);
	else
		printf("s1 and s2 are equal: count = %i\n", count);
	return (0);
}
*/
