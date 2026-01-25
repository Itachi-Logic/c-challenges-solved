/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_string_recursive.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:46:35 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/08 15:32:57 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char c1, char c2)
{
	return ((unsigned char) c1 - (unsigned char) c2);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
	return;
}

void	solve_helper(char *str, int start, int len)
{
	int	i;

	i = 0;
	if (start == len)
		return ;
	while(i < (len - 1 - start))
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			ft_swap((str + i), (str + i + 1));
		}
		i++;
	}
	solve_helper(str, start + 1, len);
	return;
}

void	sort_string(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	solve_helper(str, 0, len);
	return;
}

int	main(void)
{
	char str[] = "25143";
	printf("Before Recursive: %s\n", str);
	sort_string(str);
	printf("After Recursive: %s\n", str);
	return (0);
}
