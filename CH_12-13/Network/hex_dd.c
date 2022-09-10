#include"stdio.h"

void hex_to_dd(unsigned int x)
{   
    char* begin_address = (char*) &x;
    char each_bytes[4] = { *begin_address, *(begin_address + 0x1), *(begin_address + 0x2), *(begin_address + 0x3)};
    printf("%u.%u.%u.%u\n", each_bytes[0], each_bytes[1], each_bytes[2], each_bytes[3]);
}


int main()
{
    hex_to_dd(0x8002c2f2);
    return 0;
}