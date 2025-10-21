#pragma once
#include <string>
#include<iostream> //for output characters (prompting the user for input)

std::string getScrabbleWord(); 

/*This function does basically the same thing as this website: 
* https://www.unscramblerer.com/scrabble-calculator/
*/
int calculateWordValue(std::string& theScrabbleWord); 

