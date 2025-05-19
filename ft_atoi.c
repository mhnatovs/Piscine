
int ft_atoi(char *str)
{
	// num *= 10;
	// num += *str - 48;
	short parity;
	int number;
	parity = 0;
	number = 0;
	while ( (*str >= 9 && *str <= 13) || (*str = 32))
		str++;

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}

	while(*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		  str++;
	}

	if(parity % 2 == 0)
		return (number);
	return (-number);
}





#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *s = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
	return (0);
}