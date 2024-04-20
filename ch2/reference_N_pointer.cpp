#include <iostream>
# include <cstdlib>
// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name 
// refernce use & ;   pointer use *

int reused = 42; // reused has global scope
int main() {
    //reference Section
    int ival = 1024;
    int &refVal = ival; 
    std::cout << refVal << std::endl;


    refVal=2; // assigns2totheobjecttowhichrefValrefers,i.e.,toival 
    int ii=refVal;
    std::cout << refVal << std::endl;
    std::cout << ival << std::endl;

    //int &refVal4 = 10; // error: initializer must be an object
    double dval = 3.14;
   //int &refVal5= dval;// error:initializer mustbe an int object
    double &refVal5= dval;// okay
    std::cout << refVal5 << std::endl;


    //pointer section 
    int ival1 = 42;
    int *p = &ival1; // p holds the address of ival; p is a pointer to ival
    std::cout << ival1 << std::endl;  //42

    double dval1;
    double *pd = &dval1; // ok: initializer is the address of a double 
    double *pd2 = pd; // ok: initializer is a pointer to double
    //int *pi=pd; // error:types of pi and pd differ
   // pi = &dval; // error: assigning the address of a double to a pointer to int


    int ival2 = 42;
    int ival3 = 100;
    int *p2 = &ival2; // p holds the address of ival; p is a pointer to ival cout << *p; // * yields the object to which p points; prints 42
    std::cout << *p2<<std::endl;    //42
    *p2 =   0;
    std::cout << *p2<<std::endl;  //0
    std::cout << ival2<<std::endl; //0; When we assign to *p, we are assigning to the object to which p points.
    //*p2 = &ival3; //error: assigning to 'int' from incompatible type 'int *'; remove &
   
   //null pointer do not point to any object
    int *p3 = nullptr; 
    int *p4= 0; 
    int *p5 = NULL;
  

}

/*
1024
2
2
3.14
42
42
0
0
*/