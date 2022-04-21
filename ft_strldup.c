#include <stdlib.h>
#include "libft.h"

char	*ft_strldup(const char *s1, size_t len)
{
	char	*str;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
