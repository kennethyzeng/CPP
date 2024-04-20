#include <iostream>
# include <cstdlib>
# include <string>


int main() 
{
    using std::string; 
    using std::cin; 
    using std::cout; 
    using std::endl; 

    string s1="hiya"; 
    cout << s1 << std::endl; 
    string s2("hiya"); // direct initialization

    //Topic 1: read input a line at a time until end-of-file 
    string line;
    //while (getline(cin, line))
    //    cout << line << endl;
    //return 0;

    //Topic 2: read input a line at a time and discard blank lines 
    // while (getline(cin, line))
    //     if (!line.empty())
    //         cout << line << endl;
    //     return 0; 

    //topic 3: read input a line at a time and print lines that are longer than 80 characters 
    // while (getline(cin, line))
    //     if (line.size() > 80) 
    //         cout << line << endl;

    //topic 4: adding literals and string 
    // string s3 = "hello, ", s4 = "world\n"; 
    // string s5 = s3 + s4; // s3 is hello, world\n 
    // s3 += s4; // equivalent tos1 = s1 + s2
    // cout << s3 <<endl; 
    // cout << s5 << endl; 

    //topic 5: dealing character in string 
    string s("Hello World!!!..??");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt
    << " punctuation characters in " << s << endl;
}


