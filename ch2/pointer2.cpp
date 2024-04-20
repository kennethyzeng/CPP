#include <iostream>
# include <cstdlib>

// refernce use & ;   pointer use *
// when 

int main() 
{
    int i = 42; 
    int *pi = 0; // pi is initialized but addresses no object
    std::cout << pi<<std::endl;  //0x0

    int *pi2 = &i;  // pi2 initialized to hold the address of i
    std::cout << *pi2<<std::endl;  //42
    int *pi3; // ifpi3isdefinedinsideablock,pi3isuninitialized
    //std::cout << *pi3 << std::endl;   //when display Null pointer, it is segmentaion fault: 11

    pi3=pi2;  // pi3 and pi2 address the same object, e.g., i
    std::cout << *pi2 << *pi3 <<std::endl; // 42 42 
    //pi2=0;  // pi2 now addresses no object
    std::cout << pi2 << "/t"<< pi3 <<std::endl ;  //the address of pi2 and pi3 are difference now; 0x0/t0x7ffeed77676c42
    //*pi3 is still point to address of i, but pi2 is null pointer now
    std::cout << *pi3 <<std::endl; //42

    *pi2 = 10;   //change the value which pi2 hold the address
    //when *pi2 is point to null, you can't change value of NULL pointer...segmental faults
    std::cout <<i <<std::endl;
}    