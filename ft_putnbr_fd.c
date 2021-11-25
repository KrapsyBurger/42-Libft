#include <unistd.h>
#include <stdio.h>

void	ft_test(int i)
{
	unsigned int n;
	char a;

	if (i < 0)
	{
		write(1, "-", 1);
		n = -i;
	}
	else
	{
		n = i;
	}
	if (n > 9)
	{
		ft_test(n / 10);
		n %= 10;
	}
	a = n + '0';
	write(1, &a, 1);
}

int main()
{
	ft_test(-2147483648);
	return (0);
}