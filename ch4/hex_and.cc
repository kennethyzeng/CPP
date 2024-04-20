#include<iostream> 
#include<vector>

using namespace std; 

int main() {
    vector<int> veci={1, 5, 6, 7, 10}; 

    for(auto &v : veci)
        cout << ((v & 0x1) ? v*2 : v) << " "; 
    cout << endl; 

    return 0;
}