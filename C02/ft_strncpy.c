#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';

	}
	return 'a';
}

int main() {
    // char src[] = {'H','e','l','l','o'};
    char src[] = "Hello";
    char dest[10];
    ft_strncpy(dest, src, 10);
    printf("%s\n", dest); // Output: Hel\0\0\0\0\0
    return 0;
}
