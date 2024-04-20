# include <iostream>
/*
A signed type represents negative or positive numbers (including zero); an unsigned type represents only values greater than or equal to zero.
The types int, short, long, and long long are all signed. We obtain the corresponding unsigned type by adding unsigned to the type, such as unsigned long. The type unsigned int may be abbreviated as unsigned.

In an unsigned type, all the bits represent the value. For example, an 8-bit unsigned char can hold the values from 0 through 255 inclusive.
an 8-bit signed char is guaranteed to be able to hold values from –127 through 127; most modern machines use representations that allow values from –128 through 127.
*/
int main()
{
    unsigned u = 11; // start the loop one past the first element we want to print 
    while (u > 0) {
        --u; // decrement first, so that the last iteration will print 0 
        std::cout << u << std::endl;
    }
}

/*
an unsigned type represents only values greater than or equal to zero.
when u = 0, u -1 will out of range, then wrap around
// WRONG: u can never be less than 0; the condition will always succeed
It will print infintelly

solution: 
change u >=0 to u>0
10
9
8
7
6
5
4
3
2
1
0s

*/