#include <iostream> 
using std::cout; using std::cin; using std::endl; using std::cerr; 

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec;
    for (int i; cin >> i;ivec.push_back(i)); 

    auto size = ivec.size(); 
    if(size % 2 != 0)
    {
        cout << "The number of elements must be even";
        return -1;
    }

    for(decltype(ivec.size()) ix=0; ix < size; ix +=2){
        cout << ivec[ix] + ivec[ix +1] << " "; 
    }
    cout << endl;

    for(decltype(ivec.size()) ix=0; ix< size/2; ix++){
        cout <<ivec[ix] << " " << ivec[size-ix-1] << " ";
    }
    cout << endl; 
    return 0; 
}