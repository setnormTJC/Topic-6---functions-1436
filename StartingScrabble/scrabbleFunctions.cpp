#include "scrabbleFunctions.h"

std::string getScrabbleWord()
{
    std::cout << "Enter the word - we'll determine how points it is\n";
    std::string scrabbleWord; 

    std::cin >> scrabbleWord;

    return scrabbleWord;
    
    //return std::string(); //""
}

int calculateWordValue(std::string& theScrabbleWord)
{
    return 0; //we will change this later (not very fun at the moment)
}
