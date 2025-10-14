#include <iostream>
#include "someFunctions.h"

//#include"someFunctions.h"

//int dozen = 12; //global variable (generally NOT a good idea) 
//"global" because it is defined OUTSIDE of any set of braces

int main() {

    //doSomething(); 
    
    bool isTheClassExciting = isThisClassExcitingYet(); 

    if (isTheClassExciting == true)
    {
        std::cout << "Hooray, I am doing a decent job.\n";
    }

    else
    {
        std::cout << " : (\n";
    }

    std::cout << "One dozen is " << dozen << "\n";
    //std::cout << isThisClassExcitingYet() << "\n";

    //talk about VARIABLE "SCOPE"

    //if (true)
    //{
    //    int a = 123; 
    //}
    
    //std::cout << a << "\n"; //the variable is "in scope" within the IF body



    return 0;
}
