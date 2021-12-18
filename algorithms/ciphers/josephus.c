// ??????????????????????

unsigned main(unsigned n)
{
    if (n == 0)
        return 0;
    
    unsigned mask = 1u << (sizeof(unsigned) * 8 - 1);
    while ((n & mask) == 0)
        mask >>= 1;
    
    n ^= mask;
    n <<= 1;
    n++;

    return n;
}