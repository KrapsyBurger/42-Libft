size_t ft_strlen(const char *s)
{
    unsigned long i;
    i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}