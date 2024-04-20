#include <vector>
using std::vector;
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v1(10, 42);
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    if (v1 == v2)
        cout << "v1 and v2 has same elements" << endl;

    if (v3 == v2)
        cout << "v2 and v3 hase same elements" << endl;

    if (&v3 == &v2)
        cout << "address of v3 and v2 are same" << endl;
    else
        cout << "they don't have same address" << endl;
    return 0;
}