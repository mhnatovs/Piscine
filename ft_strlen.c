/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 07:56:13 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/18 08:04:13 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char my_str[] = "qwerhdbjdcq-134-4jvsty";
// 	printf("%d\n",ft_strlen(my_str));
// 	printf("%lu",strlen(my_str));
// 	return (0);
// }