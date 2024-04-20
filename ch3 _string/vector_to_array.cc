#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
#include<vector>
using std::vector;
#include <cstring>
#include<iterator>
using std::begin; 
using std::end; 

int main()
{
    int ci[]={4}; 
    cout << begin(ci) << " " << end(ci) << endl;//memory address
    vector<int> ivec(begin(ci), end(ci));  //
    //cout << ivec[end(ci)] << endl;

    for (auto i : ivec)
        cout << i << " ";
    cout << endl; 
    return 0;
}