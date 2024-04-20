#include <iostream>
# include <cstdlib>

// refernce use & ;   pointer use *
// when 

int main() 
{
    double obj = 3.14, *pd = &obj; 
    std::cout << *pd << std::endl;

    void *pv = & obj;
    pv = pd  ;
    std::cout << *pd << std::endl;

    int i =42; 
    int *p1 = &i; 
    *p1 = *p1 * * p1; 
    std::cout << *p1 << std::endl;  //1764

    int j = 0; 
    int* dp = &j; 
    std::cout << dp << std::endl; // address
    std::cout << *dp << std::endl;  //0

    int *ip = &j; 
    std::cout << *ip <<std::endl; //0 //this is not null pointer

    int *p = 0;
   // std::cout <<*p <<std::endl;  // null pointer

    int n=55;
    int *l = &n; 
    int *m = 0;
    if (l)
        std::cout<<"ture for l" <<std::endl; 
    if (m)
        std::cout<<"true of m" << std::endl;

}    