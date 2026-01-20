/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:25:56 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/01/20 22:54:45 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_base_valid(char *base)
{
	int	l;
	int	i;

	l = 0;
	while (base[l])
	{
		i = l + 1;
		while (base[i])
		{
			if (base[l] == base[i++])
				return (0);
		}
		if (base[l] >= 9 && base[l] <= 13)
			return (0);
		else if (base[l] == ' ' || base[l] == '-' || base[l] == '+')
			return (0);
		l++;
	}
	return (l);
}

int	is_c_valid(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (c == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	ft_count(char *str, char *base, int len_base)
{
	int	result;
	int	index;

	result = 0;
	while (*str)
	{
		index = is_c_valid(*str++, base);
		if (index == -1)
			return (result);
		result = (result * len_base) + index;
	}
	return (result);
}

int	ft_solve_helper(char *str, char *base, int len_base)
{
	int	sign;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = +1;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	return (sign * ft_count(str, base, len_base));
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;

	len_base = is_base_valid(base);
	if (!len_base)
		return (0);
	return (ft_solve_helper(str, base, len_base));
}
/*
int	main(void)
{
	char	*str;
	char	*base;

	str = "-101010";
	base = "01";
	printf("this is number in disimal: %i\n", ft_atoi_base(str, base));
	return (0);
}
*/
