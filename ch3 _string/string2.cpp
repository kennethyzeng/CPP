#include <iostream>
# include <cstdlib>
# include <string>
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main() 
{
    //topic 1: covert string to upper case
    string s("Hello Wrold!!!"); 
    for (auto &c : s)    //for every char in s (note: c is a reference) 
        c=toupper(c);   //c is a reference, so the assignment changes the char in s
    cout << s << endl;   //HELLO WROLD!!!
    
    // topic 2: index of STring
    string s1("some string"); 
    if (!s.empty())
        s1[0]=toupper(s[0]);
        cout << s1<< endl; //Home string

    //topic 3: subscript or index for iteration 
    for(decltype(s1.size()) index=0; index !=s1.size() && !isspace(s1[index]); index++)
    {
        s1[index]=toupper(s1[index]);
    }
    cout << s1 << endl;  //HOME string
    

    //topic 3: use subscript for random access 
    const string hexdigit = "0123456789ABCDEF";
    cout << "Enter a sereis of numbers between 0 and 15"
        <<" separated by spaces. Hit ENTER when finished: " << endl; 
    string result; 
    string::size_type n; 
    while(cin >> n)
    {   
        if (n < hexdigit.size())   //input is 0-15; hexdigit.size() is 16
        {
            cout << n <<" " <<hexdigit.size()<<endl; 
            result+= hexdigit[n];
        }
        cout <<"Your Hex number is " << result << endl; 
        //if  the number is exceed 15, ignore invalided input
    }

}


