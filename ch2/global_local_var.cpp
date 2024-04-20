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
    int local_int;
    std::string local_str;
    //global_str="hello";

    std::cout << global_str.c_str() << std::endl;   // empty string
    std::cout << global_int << std::endl;           // 0

    std::cout << local_str.c_str() << std::endl;    // empty string
    std::cout << local_int << std::endl;            // uninitialized, local variable might be initialize

    return 0;

}

