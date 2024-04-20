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

    for(auto it=ivec.cbegin(); it !=ivec.cend(); it +=2){ // poiter
        cout <<  *it + *(it+1) << " "; 
    }
    cout << endl;

    for(auto lit=ivec.cbegin(), rit =ivec.cend() -1; lit <=rit; ++lit, --rit){
        cout <<*lit << " " <<*rit << " ";
    }
    cout << endl; 
    return 0; 
}