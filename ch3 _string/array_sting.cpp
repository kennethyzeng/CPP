#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <iterator>
using std::begin;
using std::end;



int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *p = ca; 

    while(*p){
        cout << p << endl; //hello ello llo lo o
        cout << *p << endl;// h e l l o
        ++p; 
    }
    return 0;

}