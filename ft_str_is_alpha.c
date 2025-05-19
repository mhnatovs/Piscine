/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:34:37 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/13 12:32:13 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (*str == '\0')
		res = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] <= 'Z' && str[i] >= 'A'))
		{
			i++;
			res = 1;
		}
		else
		{
			res = 0;
			break ;
		}
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "qwerty";
	char b[] = "qwe1123=rty";
	char c[] = "";

	return 0;
}*/