/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:19:01 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/13 18:43:44 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (*str == '\0')
		res = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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

int main(void){
	char str1[] = "qwe745624345467rty";
	char str2[] = "567823";
	char str3[] = "";
	char str4[] = "123";
	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	printf("%d", ft_str_is_numeric(str4));
	return 0;
}*/