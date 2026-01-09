/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:25:41 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/09 09:15:37 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 1;
	while (*s1 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
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
	if (argc != 4)
		return (1);
	
	count = ft_strncmp(str1, str2, atoi(argv[3]));
	if (count < 0)
		printf("s1 is less than s2: count = %i\n", count);
	else if (count > 0)
		printf("s1 is greater than s2: count = %i\n", count);
	else
		printf("s1 and s2 are equal: count = %i\n", count);
	return (0);
}
*/
