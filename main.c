#include "libft.h"
#include <stdio.h>
size_t	ft_count_substrs(char const *s, char c);

int main (void)
{
	char *s = "tripouille";
	char c = 0;
	char * * tab = ft_split(s, c);
	printf("%s", tab[1]);
	for (size_t i = 0; i < ft_count_substrs(s, c); i++)
	{
		printf("\ntab[%lu] => %s\n", i, tab[i]);
	}
	
}