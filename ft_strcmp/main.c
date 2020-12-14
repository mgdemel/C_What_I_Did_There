#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "yello";
	printf("\n My strcmp outputs: %d\n", ft_strcmp(s1, s2));
    printf("    strcmp outputs: %d\n\n", strcmp(s1, s2));
	return (0);
}