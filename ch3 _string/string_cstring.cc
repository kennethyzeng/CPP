#include <iostream>
using std::cout; using std::endl;

#include <cctype>
using std::isupper; using std::toupper;
using std::islower; using std::tolower;
using std::isalpha; using std::isspace;

#include <string>
using std::string;

#include<cstring>

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";

    if (strcmp(ca1, ca2))
        cout << ca1 << endl; 
    else
        cout << ca2 << endl;

    const char *cp1=ca1, *cp2=ca2; 
    cout << cp1 << " " << cp2 << endl;
    cout << strcmp(cp1, cp2) << endl; //1 
    cout<< strcmp(cp2, cp1) << endl; //-1
    cout<< strcmp(cp1, cp1) << endl;

    cout << strlen(cp1) << endl;

    const unsigned sz=16+18+2; 
    char largeStr[sz]; 

    strcpy(largeStr, ca1);
    cout<<largeStr << endl;
    strcat(largeStr, " "); 
    strcat(largeStr, ca2);
    cout << largeStr << endl;  //A string example A different string

    strncpy(largeStr, ca1, sz);
    cout << largeStr << endl;  //A string example
    //strncpy(largeStr, ca2, 3); //A dtring example A different string

    if (strlen(largeStr) > sz)
        largeStr[sz -1] ='\0';
    cout<< largeStr<< endl; //A string example
    strncat(largeStr, " ", 2);
    cout<< largeStr<< endl; //A string example
    cout<< sz <<" " << strlen(largeStr) << " "<<sz- strlen(largeStr)<<endl; //19
    strncat(largeStr, ca2, sz-strlen(largeStr));   //copy first 19 char of ca2 to largeStr
    cout<< largeStr<< endl;  //A string example A different string
}