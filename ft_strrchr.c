#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *str;

    str = (char *) s;
    i = ft_strlen(str) - 1;
    if (c == 0)
        return(str + ft_strlen(str));
    while(str[i])
    {
        if (str[i] == c)
            return(&str[i]);
        i--;
    }
    return(0);
}
/*int main()
{
    char str[] = {"maryam student"};
    printf("%s\n", ft_strrchr(str, 'm'));
    printf("%s\n", strrchr(str, 'm'));
    return(0);
}*/