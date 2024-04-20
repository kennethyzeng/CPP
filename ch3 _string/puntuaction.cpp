#include <iostream>
# include <cstdlib>
# include <string>
#include <vector>
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 
using std::vector;

#include<cctype>
using std::ispunct; 
//puntuation character  - . ? ;  ! - (hyphen) _ [] {} () '(apostrophe) ""  ...(ellipsis)

int main() 
{
    string s; 
    cin >> s; 

    for(auto c : s){
        //cout << c << endl;
        if (!ispunct(c))
            cout << c; 
    }
    return 0; 

}

