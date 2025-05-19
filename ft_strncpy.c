/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:09:27 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/09 10:32:12 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i]))
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
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	unsigned int i =8;
	char a[] = "Hello";
	char b[10];

	ft_strncpy(b, a, i);
	printf("%s", b);
	return (0);
}
*/