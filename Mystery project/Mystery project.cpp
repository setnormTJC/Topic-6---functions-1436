// Mystery project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include <string>

#include"fileReadingFunctions.h"




int main()
{

	std::string filename = "secretFile.txt";

	//instruction 1:
	std::cout << "Enter a password (for locking a file)\n";
	std::string correctPassword; 
	std::getline(std::cin, correctPassword);


	//instruction 2: 
	std::cout << "Dost thou want to view thy document (yes/no)?\n";
	std::string yesOrNo; 
	std::getline(std::cin, yesOrNo);
	
	if (yesOrNo == "yes")
	{
		std::string passwordAttempt = promptForPassword();

		if (passwordAttempt == correctPassword)
		{
			displayContentsOfFile(filename); 
		}
	}


	//	if (enteredPassword == correctPassword)
	//	{
	//		//then display file contents
	//	}
}

