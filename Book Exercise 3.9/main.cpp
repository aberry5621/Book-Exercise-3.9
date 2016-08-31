//
//  main.cpp
//  Book Exercise 3.9
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.9 - Find Days in a Month
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Find the Number of Days in a Month \n";
    // D
    int month_input = 0;
    int year_input = 0;
    int month_days = 0;
    bool is_leap_year = false;

    // I
    cout << "Enter the month number, i.e. enter March as '3': ";
    cin >> month_input;
    
    cout << "Enter the year number: ";
    cin >> year_input;
    
    // P // O
    
    if (month_input == 1
     || month_input == 3
     || month_input == 5
     || month_input == 7
     || month_input == 8
     || month_input == 10
     || month_input == 12) {
        month_days = 31;
        cout << "Month " << month_input << " of year " << year_input << " has 31 days." << endl;
    }
    else if (month_input == 4
             || month_input == 6
             || month_input == 9
             || month_input == 11) {
        month_days = 30;
        cout << "Month " << month_input << " of year " << year_input << " has 30 days." << endl;
    }
    else if (month_input == 2) {
        // Run February leap year calculation
        cout << "Is February of this year a leap month? Let's find out!" << endl;
        is_leap_year = (year_input % 4 == 0 && year_input % 100 != 0) || (year_input % 400 == 0);
        
        if (is_leap_year) {
            cout << year_input << " is a leap year!" << endl;
            cout << "Month " << month_input << " of year " << year_input << " has 29 days." << endl;
        }
        else {
            cout << year_input << " is not a leap year :(" << endl;
            cout << "Month " << month_input << " of year " << year_input << " has 38 days." << endl;
        }
    }
    else {
        cout << "Error: " << month_input << " is not a valid month number" << endl;
    }
    
    return 0;

    
}
