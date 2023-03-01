#include<stdlib.h>

/* Return 1 when any even bit of x equal to 1, 0 elsewhere, Assume w = 32*/
int any_even_one(unsigned x) {
	return !!(0x55555555 & x) 
}

// 32bits = 4bytes = 0101,0101,...,0101(0x55555555)
// 

