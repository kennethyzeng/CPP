# include <iostream>
/*
A signed type represents negative or positive numbers (including zero); an unsigned type represents only values greater than or equal to zero.
The types int, short, long, and long long are all signed. We obtain the corresponding unsigned type by adding unsigned to the type, such as unsigned long. The type unsigned int may be abbreviated as unsigned.

In an unsigned type, all the bits represent the value. For example, an 8-bit unsigned char can hold the values from 0 through 255 inclusive.
an 8-bit signed char is guaranteed to be able to hold values from –127 through 127; most modern machines use representations that allow values from –128 through 127.
*/
int main()
{
    unsigned v1=10, v2=42;
    std::cout << v2-v1 <<std::endl;  // 42 - 10
    // integer is 2^16(positive and negative), when unsign is 2^32 = 4294967296 which range of 0 to 4294967296
    //10 - 42 = -32 + 4294967296=4294967264
    std::cout << v1 - v2 << std::endl;

    int i = 10, i2=42; 
    std::cout << i2-i << std::endl; 
    std::cout << i - i2 << std::endl; 
    std::cout << i -v2 << std::endl; //10(sign) - 42(unsigned)  -> Converting a negative number to unsigned valuse. The value is "wrap around"
    std::cout << v2 - i << std::endl;

    return 0;
}
/*
32
4294967264

32
-32
4294967264
32
*/