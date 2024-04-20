#include <iostream>
using std::cout;
using std::endl;

//using auto here will make compiler to run log
//not recommend unless find a optimzed solution

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (auto &row : ia)
        for (auto col : row)
            cout << col << " ";
    cout << endl;

    for (auto i = 0; i < 3; ++i)
        for (auto j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;

    for (auto row = ia; row != ia + 3; ++row)
        for (auto *col = *row; col != *row + 4; ++col)
            cout << *col << " ";
    cout << endl;

    return 0;
}