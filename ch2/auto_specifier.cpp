#include <iostream>
# include <cstdlib>

// refernce use & ;   pointer use *


int main() 
{
    typedef double wages; 
    typedef wages base, *p; 

    typedef char *pstring;
    const pstring cstr = 0; // cstr is a constant pointer to char
    const pstring *ps; // ps is a pointer to a constant pointer to char

    auto j = 0, *p = &j; // ok:iisintandpis a pointer toint 
    //auto sz=0,pi=3.14; // error:inconsistenttypesforszandpi

    int i = 0, &r = i;
    auto a = r; // ais anint(ris an alias fori, which has typeint)

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level) auto d = &i; // dis anint*(&of anintobject isint*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)

    auto &g = ci; // gis aconstint&that is bound toci 
    //auto &h = 42; // error: we can’t bind a plain reference to a literal 
    const auto &j = 42; // ok: we can bind a const reference to a literal

}    

