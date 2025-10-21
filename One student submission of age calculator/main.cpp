#include <iostream>
#include"ageRelatedFunctions.h"


using namespace std;


int main() {

    while (true) {
        int birthDay, birthMonth, birthYear;
        int currentDay, currentMonth, currentYear;

        // Prompt user for birth date
        cout << "\nEnter your birth date:\n";
        do {
            cout << "  Month: ";
            cin >> birthMonth;
            cout << "  Day: ";
            cin >> birthDay;
            cout << "  Year: ";
            cin >> birthYear;
        } while (!isValidDate(birthDay, birthMonth, birthYear));

        // Prompt user for current date
        cout << "\nEnter the current date:\n";
        do {
            cout << "  Month: ";
            cin >> currentMonth;
            cout << "  Day: ";
            cin >> currentDay;
            cout << "  Year: ";
            cin >> currentYear;
        } while (!isValidDate(currentDay, currentMonth, currentYear));

        // Calculate and display age
        int age = calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);
        cout << "\nYou are " << age << " years old.\n";
    }

    return 0;
}


///*return square root*/
//int sqrt(int a)
//{
//
//}
//
///*this function prints "Doing something..."*/
//void doSomething()
//{
//    std::cout << "Doing something...\n";
//}

