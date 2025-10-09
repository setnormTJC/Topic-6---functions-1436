#include"mySpecialLibraryOfFunctions.h"
#include <iostream>

double squareTheInput(double theInput)
{
	return theInput * theInput; 
}

void printSomething()
{
	std::cout << "Something\n";
}

void showCatVideo()
{
	std::system("prayKitty.mp4");
}

void showMenuOptions()
{
	std::cout << "1 - dance the night away\n";
	std::cout << "2 - do something else...\n";
}