#include <iostream>
# include <cstdlib>

// refernce use & ;   pointer use *


int main() 
{
    //top-Level sonst VS. low_level const
    int i =0; 
    int *const p1 = &i;  //we can't change the value of p1; const is top-level 
    std::cout << *p1 <<std::endl;  //0
    *p1 = 13; 
    std::cout << *p1 <<std::endl;  //13

    const int ci = 42;  //we cannot change ci; const is top-level
    const int *p2=&ci;  //we can change p2; const is low-level
    std::cout << *p2 <<std::endl;  //42
    //*p2 = 40;
    //std::cout << *p2 <<std::endl;

    const int *const p3 = p2;   //right-most const is top-leve, left-most is not
    std::cout << *p3 <<std::endl;   //42

    const int &r = ci;  //const in reference type is always low-level
    std::cout << r <<std::endl; //42

    i = ci; 
    //i = 58;
    std::cout << i <<std::endl;  //42 copying the value of ci; top-level const in ci is ignored 
    p2 = p3;  //pointed-to type matches; top-level const in p3 is ignored
    std::cout<<*p2<<std::endl;   //42

    //int *p = p3;  //error: p3 has a low-level const but p doesn't
    p2 = p3;   //p2 has the same low-level const qualifation as p3 
    i = 100;
    p2 = &i;  //okay; we can convert int* to const int *; 
    std::cout<<*p1<<std::endl;   //p1 also to point to i//100
    std::cout<<*p2<<std::endl;  //100
    //p3 has both a top-level and low-level const. When we copy p3, we can ignore its top-level const but not the fact that it points to a const type. Hence, we cannot use p3 to initialize p, which points to a plain (nonconst) int.
    const int *p5 = p3; 
    std::cout<< *p5<< std::endl;

    //On the other hand, we can assign p3 to p2. Both pointers have the same (low-level const) type. The fact that p3 is a const pointer (i.e., that it has a top-level const) doesn’t matter
}    

