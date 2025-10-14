// The a s c 2 assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //char userInput{}; //braces initialize the char to '' (the "empty character"
    //
    //char quitCharacter = 'q';
    //
    //int numberOfCharactersInputByUser = 0; 
    //while (userInput != quitCharacter)
    //{
    //    //the body of the loop:
    //    std::cout << "Enter a character\n";
    //    std::cin >> userInput;

    //    numberOfCharactersInputByUser++; 
    //}

    //std::cout << "The number of characters that you entered: "
    //    << numberOfCharactersInputByUser << "\n";

    //std::cout << "The FINAL character you entered was: " << userInput << "\n";

    for (int i = 0; i <255; ++i)
    {
        std::cout << (char)i << "\n"; //the (char) "typecasts" an int to a char
    }
}
