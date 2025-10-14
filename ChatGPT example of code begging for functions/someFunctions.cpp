#include "someFunctions.h"
#include <iostream>
#include <string>

void doSomething()
{
	std::cout << "Doing something\n";
	doSomethingElse(); 
	//doSomething(); //recursion (we will discuss later)
}

void doSomethingElse()
{
	std::cout << "Doing something else\n";
}

bool isThisClassExcitingYet()
{

	int dozen = 12; 

	std::cout << "Well, is it (exciting yet - this class) - yes or no?!\n";

	std::string userResponse; 

	std::getline(std::cin, userResponse); 

	if (userResponse == "yes")
	{
		return true; 
	}

	else //user response is NOT "yes"
	{
		return false;
	}
}
