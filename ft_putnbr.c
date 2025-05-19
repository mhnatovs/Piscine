#include <unistd.h>

void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        end--;
        start++;
    }
}

void ft_putnbr(int nb)
{
	char str = nb + '0';
	


}
#include 
int main()
{
	ft_putnbr(42);
	return 0;
}