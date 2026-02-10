#include <stdlib.h>

#include <stdlib.h>

static int  ft_count_words(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}


static char *ft_word_dup(char const *s, int start, int end)
{
    char    *word;
    int     i;

    word = malloc(end - start + 1);
    if (!word)
        return (NULL);
    i = 0;
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}


static void ft_free_split(char **res, int i)
{
    while (i > 0)
        free(res[--i]);
    free(res);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     i;
    int     j;
    int     start;

    if (!s)
        return (NULL);
    res = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
            res[j++] = ft_word_dup(s, start, i);
    }
    res[j] = NULL;
    return (res);
}

