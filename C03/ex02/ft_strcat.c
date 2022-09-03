#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char dest[10] = "hamza ";
    char src[5] = "nait";
    ft_strcat(dest, src);

    printf("dest = %s\nsrc = %s\n", dest, src);
    return (0);
}