// Simple function example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void printSomething(std::string theThingToPrint)
{
    std::cout << theThingToPrint << "\n";
}

bool areYouOld(int age)
{
    if (age > 80)
    {
        //what goes here? 
        return true; 
    }

    else //age <= 80
    {
        return false; 
    }
}

int getAgeOfUser()
{
    std::cout << "Enter your age\n";
    int age; //please mr. OS, give me space to hold this integer (4 Bytes)

    std::cin >> age; 


    //what goes here? 
    return age;
}

int main()
{
    std::string somethingElse = "something ELSE";

    //printSomething(somethingElse);

    auto userAge = getAgeOfUser(); 

    if (areYouOld(userAge))
    {
        std::cout << "You are old\n";
    }

    else
    {
        std::cout << "You are NOT old\n";
    }

}

