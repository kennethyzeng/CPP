#include <iostream>
// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name 
int reused = 42; // reused has global scope
int main() {
    int unique = 0; // unique has block scope // output#1:usesglobalreused;prints420
    std::cout << reused << " " << unique << std::endl; 
    int reused=0;// new,localobjectnamedreusedhidesglobalreused
    // output#2:useslocalreused;prints00
    std::cout << reused << " " << unique << std::endl;
    // output#3:explicitlyrequeststheglobalreused;prints420 
    std::cout << ::reused << " " << unique << std::endl;
    return 0; 
}
/*
Output #1 appears before the local definition of reused. Therefore, this output statement uses the name reused that is defined in the global scope. This statement prints 42 0. 
Output #2 occurs after the local definition of reused. The local reused is now in scope. Thus, this second output statement uses the local object named reused rather than the global one and prints 0 0. 
Output #3 uses the scope operator (§ 1.2, p. 8) to override the default scoping rules. The global scope has no name. Hence, when the scope operator has an empty left-hand side, it is a request to fetch the name on the right-hand side from the global scope. Thus, this expression uses the global reused and prints 42 0.

42 0
0 0
42 0
*/