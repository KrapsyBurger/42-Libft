#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        else
        {
            i++;
        }
    }
    return (s1[i] - s2[i]);
}

int main()
{
    char a[6] = "";
    char b[6] = "";
    printf("%d\n", strncmp(a, b, 12));
    printf("\n");
    printf("%d\n", ft_strncmp(a, b, 12));
    return (0);
}