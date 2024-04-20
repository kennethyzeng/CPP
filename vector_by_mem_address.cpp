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
    vector<int> ivec(5, 1); 

    int ia[5]; 
    decltype (ivec.size()) sz=ivec.size(); //

    for(auto i= 0; i < sz; i ++)
        ia[i]=ivec[i];   //
        
    for(auto i:ia)
        cout << i << " "; 
    cout << endl; 
    return 0;
}