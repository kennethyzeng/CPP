#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec; 
    vector<string> svec; 
    vector<vector<int>> vecOfVec; 
    vector<vector<string>> file;

    cout << ivec.size() << " "<< svec.size()<< " "<< vecOfVec.size() << " " << file.size() << endl;
    //0 0 0 0

    vector<int> ivec2(10);   //{0,0,0,0,..}
    vector<int> ivec3(10,1);  //{1,1,1,1 ..}
    vector<string> svec2(10); //{           } 10 empty element
    vector<string> svec3(10, "hi");  //{"hi", "hi",...}


    vector<string> v1(10);  //construct v1 with ten value_initialzied element.// {      }
    vector<string> v2{10}; // {      }
    vector<string> v3(10, "hi"); //{hi, hi, ....}
    vector<string> v4{10, "hi"};  //{10,1}  //string vs int
    vector<int> v5{10,1};
    cout << v1.size() << " " << v2.size()
         << " " << v3.size() << " " << v4.size() << endl;

    vector<int> v5(10, 1);  // ten elements with value 1
    vector<int> v6{10, 1};  // two elements with values 10 and 1
    cout << v5.size() << " " << v6.size() << endl;

    vector<int> alt_v3 = {10};    // one element with value 10
    vector<int> alt_v4 = {10, 1}; // two elements with values 10 and 1
    cout << alt_v3.size() << " " << alt_v4.size() << endl;

    for(auto i: v5)
        cout<< i << " ";

    return 0;
    
}