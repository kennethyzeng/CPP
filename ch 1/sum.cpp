#include <iostream>

auto sum(int s, int e)
{
    int sum = 0;
    for (int i = s; i <= e; i++)
        sum += i;
    return sum;
}

int main()
{
    std::cout << "Sum of 50 to 100 inclusive is " << sum(50, 100);
    return 0;
}
//Sum of 50 to 100 inclusive is 3825
// need to figure out the error of why 'auto' is not allowed in function return type
//above code is okay to run in web c++ complier; however, have error in visual studio c++ extension