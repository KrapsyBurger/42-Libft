int ft_atoi(const char *nptr)
{
    int i = 0;
    int result = 0;
    int neg = 1;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' )
        i++;
    else if (nptr[i] == '-')
    {
        i++;
        neg *= -1;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result *= 10;
        result += nptr[i]-48;
        i++;
    }
    return (result *= neg);
}