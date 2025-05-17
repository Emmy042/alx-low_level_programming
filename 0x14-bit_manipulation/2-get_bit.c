#include <limits.h>   /* for sizeof checks */

/**
 * get_bit - returns the value of a bit at a given index
 * @n:      unsigned long int whose bit is to be tested
 * @index:  position of the bit (0 = least-significant)
 *
 * Return:  0 or 1 on success, -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{

/* how many bits are in an unsigned long int on this platform? */
if (index >= sizeof(n) * 8)
return (-1);

/* shift n right by index positions, then isolate LSB */
return ((n >> index) & 1UL);

}

