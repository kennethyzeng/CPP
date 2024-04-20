# include <iostream>
/*
A signed type represents negative or positive numbers (including zero); an unsigned type represents only values greater than or equal to zero.
The types int, short, long, and long long are all signed. We obtain the corresponding unsigned type by adding unsigned to the type, such as unsigned long. The type unsigned int may be abbreviated as unsigned.

In an unsigned type, all the bits represent the value. For example, an 8-bit unsigned char can hold the values from 0 through 255 inclusive.
an 8-bit signed char is guaranteed to be able to hold values from –127 through 127; most modern machines use representations that allow values from –128 through 127.
*/
int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl; // prints -84
    std::cout << u + i << std::endl; // if 32-bit ints, prints 4294967264

    return 0;
}
/*
-84
4294967264
*/