#include <iostream>
//using std::cin;
//using std::cout;

#include <vector>
//using std::vector;

#include <string>
//using std::string;

#include <cctype>
//using std::toupper;
//using std::isalpha;

int main()
{
    using namespace std;
    
    vector<string> text;
    string str;

    while (cin >> str)
        text.push_back(str);

    for (auto &word : text) {
        for (auto &c : word) {
            if (isalpha(c))
                c = toupper(c);
        }

        cout << word<<<CS" ";
    }

    return 0;
}