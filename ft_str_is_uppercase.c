/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:47:42 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/13 16:50:31 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[i] == '\0')
		res = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			res = 1;
		}
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	char str1[]="Qwerty";
	char str2[]="QWERTY";
	char str3[]="";
	char str4[]="qewrty";
	char str5[]="qwerHJK";
	printf("%i\n", ft_str_is_uppercase(str1));
	printf("%i\n", ft_str_is_uppercase(str2));
	printf("%i\n", ft_str_is_uppercase(str3));
	printf("%i\n", ft_str_is_uppercase(str4));
	printf("%i\n", ft_str_is_uppercase(str5));
	return (0);
}*/