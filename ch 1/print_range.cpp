#include <iostream>

void print_range(int low, int high)
{
    if (low > high)
        print_range(high, low);

    while (low <= high)
        std::cout << low++ << " ";
    std::cout <<  "\n";
}

int main()
{
    int low = 0, high = 0;
    std::cout << "Please input two integers:\n";
    std::cin >> low >> high;
    print_range(low, high);
    return 0;
}
//5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 