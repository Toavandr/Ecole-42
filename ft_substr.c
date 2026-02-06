#include "stddef.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    if (!s)
        return NULL;
    if (start >= ft_strlen(s))
        return ft_strdup("");
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    sub = ft_calloc(len + 1, sizeof(char));
    if (!sub)
        return NULL;
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    return sub;
}