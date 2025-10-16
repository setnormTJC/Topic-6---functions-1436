#include "fileReadingFunctions.h"


#include<fstream> 
#include <iostream>
#include<string> 

std::string promptForPassword()
{ //opening braces here means this is a function "Definition"
	std::cout << "Enter the password that you set earlier\n";

	std::string passwordAttempt; 

	std::getline(std::cin, passwordAttempt);

	return passwordAttempt; 
}


void displayContentsOfFile(std::string filename)
{
	std::ifstream fin("secretFile.txt");
	
	if (!fin.is_open())
	{
		std::cout << "Unable to find file\n";
		//early return (don't waste time getting lines from a file that doesn't exist!

		return; 
	}

	std::string currentLineInFile; 
	while (std::getline(fin, currentLineInFile))
	{
		std::cout << currentLineInFile << "\n";
	}

}