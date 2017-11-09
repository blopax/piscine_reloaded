#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*dest;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(dest = (int *)malloc(sizeof(int) * (max - min + 1))))
		return (NULL);
	while (min + i <= max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
