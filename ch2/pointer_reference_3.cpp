#include <iostream>
# include <cstdlib>
# include <string>
#include <vector>
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 
using std::vector;

std::string global_str;
int global_int;

int main() 
{
    int a= 0, b =1; 
    int *pa = &a, *pb = pa;  //*pa = *pb = &a =0
    cout << *pa << " " << *pb<<endl;; 
    pb = &b;  //pb =1
    cout << *pa << " " << *pb<<endl;; 
    *pa = 2; 
    cout << *pa << " " << *pb<<endl;; 

}

