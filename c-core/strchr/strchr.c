#include <stddef.h>

const char	*strchr(const char *s, int c)
{
	int i;
	i = 0;
	while (*(s + i ) >= '\0')
	{
		if (*(s + i) == c)
		{
			return (const char *) (s + i);
		}
		// else if (*(s + i) != '\0')
		// {
		// 	return (const char *) (s + i);
		// }
		i++;
	}
	return (NULL);
}


