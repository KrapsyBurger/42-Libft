#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}

int main()
{
    char a[]="abcdefg";
    printf("%s\n", ft_strchr(a, 'e'));
    return (0);
}