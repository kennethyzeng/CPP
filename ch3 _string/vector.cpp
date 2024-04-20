#include <iostream>
# include <cstdlib>
# include <string>
#include <vector>
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 
using std::vector;

int main() 
{
    vector<string> ivec(10, "hi");   //6 * 10
    vector<string> svec(10); 
    
    int i =0;
    while (i < ivec.size()){
        cout << i << " "<<ivec[i] <<endl;
        cout <<i << " "  << svec[i]<< endl;   // svec: 10 elements, and each element is empty string
        
        i++;
    }

    //not work at VST somehow 
    // vector<int> v{1, 2, 3, 4, 5, 6,7};
    // vector<string> v2{"a", "an", "the"};
    // for (auto &i :v)
    // {
    //     i *= i;
    //     cout << i<<endl;
    // }
    // for (auto j : v)
    //     cout <<j << " ";
    // cout << endl;
    // return 0;
    

    //Topic 3: count grades by various cluster
    // vector<unsigned> scores(10,0); //11 buckets
    // unsigned grade; 
    // while(cin >> grade)
    // {
    //     if (grade <=100)
    //         ++scores[grade/10];
    // }
    // for (auto i : scores)
    //     cout << i << " " ;
    // cout << endl;
    // return 0;

    vector<int> ivec1; // empty vector
    for (decltype(ivec1.size()) ix = 0; ix != 10; ++ix)
    {
        //ivec1[ix]=ix; // disaster:ivechasnoelements
        ivec1.push_back(ix);  //correct way
        cout << ivec1[ix] << endl;
    }

    string s("some string"); 

    if(s.begin()!=s.end()){// makesuresisnotempty
        auto it = s.begin(); // it denotes the first character in s
        //cout << s.begin() << endl; //error; cant do like it
        *it = toupper(*it); // make that character uppercase }
        
    }
    cout << s << endl;

    for(auto it=s.begin(); it <=s.end() && !isspace(*it); ++ it)  //iterator 
        *it=toupper(*it);
    cout << s << endl;

    // print each line in text up to the first blank line 
    // for (auto it = text.cbegin();
    // it != text.cend() && !it->empty(); ++it) 
    //     cout << *it << endl;


}


