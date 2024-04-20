#include <iostream>

int main()
{
    //int sum=0;
    //int sum(98);
    int sum ={98};
    std::cout << sum<< std::endl;

    //list initalization
    long double ld = 3.1415926534;
    int a(ld), b= ld, c={ld};
    //int e{ld}; // some compiler work with this format, some doesn't
    std::cout <<ld<< std::endl;
    std::cout << a<< std::endl;
    std::cout << b<< std::endl;
    std::cout << c<< std::endl;
    //std::cout << e<< std::endl;

    return 0;
}
/*
98
3.14159
3
3
3
*/

