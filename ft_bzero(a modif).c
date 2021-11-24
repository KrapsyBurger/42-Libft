#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char *a;

	i = 0;
	a = s;
	while (i < n)
	{
		a[i] = '\0';
		i++;
	}
}

int main()
{
	char a[8] = "bonjour";
	char b[8] = "bonjour";
	bzero(a, 3);
	ft_bzero(b, 3);
	printf("%s\n", a);
	printf("\n");
	printf("%s\n", b);
	return (0);
}