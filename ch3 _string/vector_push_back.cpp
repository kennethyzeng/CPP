#include <iostream>
#include<string>
using std:: string;
#include <cstring>
using namespace std; 

int main() {
    const char str1[] = "A String example"; 
    const char str2[] = "A different string"; 

    const unsigned sz= 16 + 8 + 2; 
    char str3[sz]; 
    strcpy(str3, str1);
    strcat(str3, " ");  // concatenates a certain amount of characters of two strings
    strcat(str3, str2);
    cout << str3 << endl;
}