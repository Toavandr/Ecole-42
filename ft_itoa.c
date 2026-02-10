#include <stdlib.h>
static int  ft_intlen(long nb)
{
    int len;

    len = (nb <= 0);
    while (nb)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    long    nb;
    int     len;
    char    *res;

    nb = n;
    len = ft_intlen(nb);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len] = '\0';
    if (nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }
    while (len-- && nb)
    {
        res[len] = (nb % 10) + '0';
        nb = nb / 10;
    }
    if (res[0] == '\0')
        res[0] = '0';
    return (res);
}
