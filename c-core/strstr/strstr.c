#include <stddef.h>

char	*strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if(*needle == '\0')
	{
		return ((char*)haystack);
	}
	while(haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
