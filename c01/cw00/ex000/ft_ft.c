#include <stddef.h>

void	ft_ftc(char *nbr)
{
	 if (nbr != NULL) { // Check if the pointer is not NULL
        *nbr = 'g';
    } else {
		// *nbr = 'h';
    }
}
