/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:54:41 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/14 17:52:37 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "apple";
    char str2[] = "banana";

    int result = ft_strcmp(str1, str2);

    if (result == 0) {
        printf("1 = 2\n");
    } else if (result < 0) {
        printf("1 < 2\n");
    } else {
        printf("1 > 2\n");
    }
}*/