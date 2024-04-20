#include <iostream>
using std::cout, std::cin, std::endl; 
#include<string>
using std::string; 
#include<vector>
using std::vector; 
#include<iterator>
using std::begin, std::end;

int main()
{
    int arr[12]={0,1,2,3,4,5,6,7,8,9,10,11}; 
    auto p = begin(arr);
    while(p != end(arr)){
        *p++=0; 
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
