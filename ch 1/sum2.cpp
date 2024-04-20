#include <iostream> 

auto sum(int v1, int v2)
{
    int sum = 0; 
    while(v1 <= v2){
        sum += v1++;
    }
    return sum; 
}

int main()
{
    std::cout << "sum of 50 to 100 inclusive is " << sum(50, 100);
}
//sum of 50 to 100 inclusive is 3825
//why online compiler okay
//test.cc:3:1: error: 'auto' not allowed in function return type
//auto sum(int v1, int v2)