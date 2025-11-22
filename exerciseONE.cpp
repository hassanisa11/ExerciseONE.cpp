#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Step 1: Declare variables for user details
    string firstName, middleName, lastName, fullName, alias;
    string favoriteMeal, favoriteMovie, whyInClass;

    // Step 2: Get user input
    cout << "=== User Profile Creator ===" << endl;
    cout << endl;

    cout << "Enter your First Name: ";
    getline(cin, firstName);

    cout << "Enter your Middle Name: ";
    getline(cin, middleName);

    cout << "Enter your Last Name: ";
    getline(cin, lastName);

    cout << "Enter your Full Name: ";
    getline(cin, fullName);

    cout << "Enter your Alias/Nickname: ";
    getline(cin, alias);

    cout << "Enter your Favorite Meal: ";
    getline(cin, favoriteMeal);

    cout << "Enter your Favorite Movie: ";
    getline(cin, favoriteMovie);

    cout << "Why are you in this class? ";
    getline(cin, whyInClass);

    // Step 3: Display the formatted output
    cout << endl;
    cout << "=== USER PROFILE ===" << endl;
    cout << "====================" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Middle Name: " << middleName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Alias: " << alias << endl;
    cout << "Favorite Meal: " << favoriteMeal << endl;
    cout << "Favorite Movie: " << favoriteMovie << endl;
    cout << "Why am I in this class?: " << whyInClass << endl;
    cout << "====================" << endl;

    return 0;
}