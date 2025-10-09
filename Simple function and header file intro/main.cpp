// Simple function and header file intro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"mySpecialLibraryOfFunctions.h"

#include"anotherHeader.h"

//Let's get "modular"  (later we will get "object-oriented")
#include<string> 
#include<iomanip> 


int main()
{
	//
	//std::cout << a << "\n";

	//int a = 123; 

	//function1(); 

	//double theInput = 5.0; 

	//double theOutput = squareTheInput(theInput); 

	////std::cout << squareTheInput(theInput) << "\n";
	//std::cout << theOutput << "\n";
	//

	//printSomething(); //this is called a "function call"


	//showCatVideo(); //() have a technical name -> "function call operator" 

	std::string input{}; 

	while (input != "quit")
	{
		showMenuOptions();
		std::getline(std::cin, input); 
	}

	return 0;
}

