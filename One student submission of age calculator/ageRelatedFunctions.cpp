#include"ageRelatedFunctions.h"

// Function to validate a date
bool isValidDate(int day, int month, int year) {
    if (day < 1 || day > 31) {
        cout << "Invalid date: Day must be between 1 and 31.\n";
        return false;
    }
    if (month < 1 || month > 12) {
        cout << "Invalid date: Month must be between 1 and 12.\n";
        return false;
    }
    if (year < 1900 || year > 2025) {
        cout << "Invalid date: Year must be between 1900 and 2025.\n";
        return false;
    }
    return true;
}

/*calculates age (good I didn't know that)*/
int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear) {
    int age = currentYear - birthYear;

    // If birthday hasn't occurred yet this year, subtract one
    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    return age;
}

