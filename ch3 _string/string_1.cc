#include <iostream>
using std::cout;

#include <string>
using std::string;

int main()
{
    string s = "Hello World!";

    for (auto &c : s)
        c = 'X';

    cout << s;

    return 0;
}

// int main()
// {
//     string s = "Hello World!";

//     for (auto &c : s)
//         c = 'X';

//     cout << s;  //Hello World

//     return 0;
// }