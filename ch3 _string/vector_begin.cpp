#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

// know the difference between cbegin() and begin()
int main()
{
    vector<int> vec(10, 1);

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
    }

    for (auto v : vec) {
        cout << v << " ";
    }

    return 0;
}