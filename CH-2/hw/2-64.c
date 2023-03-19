#include<stdio.h>

/* Return 1 when any even bit of x equal to 1, 0 elsewhere, Assume w = 32*/
int any_even_one(unsigned x) {
	return !!(0x55555555 & x);
}

int main() {
	unsigned num = 0;
	scanf("%u", &num);
	printf("%d", any_even_one(num));
	return 0;
}
// 32bits = 4bytes = 0101,0101,...,0101(0x55555555)
//

