#pragma once //don't #include this file more than once (otherwise, redefinition errors)

#include<iostream> //input output 

using namespace std;

// Function prototype declarations
bool isValidDate(int day, int month, int year); //prototype synonymous with "declaration"
int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear);
