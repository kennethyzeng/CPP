#include <iostream>
# include <cstdlib>

// refernce use & ;   pointer use *


int main() 
{
    // section 1: Initialization and References to const
    int i = 42; 
    const int &r1 =i ; 
    std::cout << r1 << std::endl; 
    const int &r2 =42; 
    std::cout << r2 << std::endl; 
    const int &r3 = r1 * 2; 
    std::cout << r3 << std::endl; 
    //int &r4 = r1 *2; //error:r4isaplain,nonconstreference

    double dval = 3.14; 
    const int &ri = dval; 
    std::cout << ri<<std::endl;
    const double &rj= i; 
    std::cout << rj << std::endl;

    // section II: A reference to const may refer to an object that is not const
    int m = 42; 
    int &r5 = m; 
    const int &r6 = m;
    std::cout << r6 << std::endl;
    r5 = 0; 
    std::cout << m<<r5 << r6<< std::endl; // 0  0   0
    //r6 = 0;  //error; r2 is a reference to const;  even it is 0; 

    //section III: pointers and const
    const double pi = 3.14;  // pi is const; its value may not be changed
    //double *ptr = &pi; // error:ptrisaplainpointer
    const double *cptr = &pi; 
    //*cptr = 42;  // error: cannot assign to *cptr
    std::cout << *cptr << std::endl;
    double kval=500;
    cptr = &kval; 
    std::cout << *cptr << std::endl;

    //section VI: Const pointer
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb 
    const double pi2 = 3.14159;
    //pip is a const pointer to an object of type const double.
    const double *const pip = &pi2; // pip is a const pointer to a const object
    std::cout << *curErr << std::endl;
    std::cout << *pip << std::endl;
    errNumb= 100; 
    std::cout << *curErr << std::endl;
    /*pip is a const pointer to const. Neither the value of the object addressed by pip nor the address stored in pip can be changed. On the other hand, curErr addresses a plain, nonconst int. We can use curErr to change the value of errNumb
    */
}    

/*
42
42
84
3
42
42
000
3.14
500
0
3.14159
100
*/