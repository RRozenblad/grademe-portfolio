#include <limits.h>

// Return 1 when value can be stored in an int without changing,
// 0 when the conversion would lose information.
int	fits_in_int(long value)
{
	int i;
	i = value;
	if (value == i)
	{
		return (1);
	}
	return (0);
}
