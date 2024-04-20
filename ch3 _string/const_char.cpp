#include <iostream>
# include <cstdlib>
# include <string>
#include <vector>
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 
using std::vector;

//#include<cctype>
//using std::ispunct; 
//puntuation character  - . ? ;  ! - (hyphen) _ [] {} () '(apostrophe) ""  ...(ellipsis)

int main() 
{
   

    string s = "Keep out!";

    for (auto &c : s) { // c is const char&
        c = "i"; 
        cout << c << endl;
    }


    string s1 ="hello"; 
    for (auto c : s1)   //
        cout << c << endl;

    return 0;

}

