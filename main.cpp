//This program will take one input from the user for demonstration purpouses and then conver that input into the corresponding day. If the user inputs a number out of range it will simply ask them to try again. In the end it should test the default construstor, the user supplied value to the function, the next day function, the previous day funciton, the add days function, and the error handling aspects of it.
#include <iostream>
#include "dayType.h"

using namespace std;

int main() {
    // This tests the default constructor and what is defaultly set to which should be sunday
    dayType defaultDay;
    cout << "Testing the default day (should be Sunday):" << endl;
    defaultDay.printCurrentDay(); 
    cout << endl;

    // This tests the constructor with a user-supplied parameter
    // It asks the user to enter a number and then runs it throuhg a if /do-while statement that checks if the number is between 0 and 6
    int day;
    cout << "Testing constructor with user-supplied parameter" << endl;
    cout << "Please enter a number between 0 and 6: ";
    cin >> day;
    if (day < 0 || day > 6){
        do {
          cout << "Invalid input. Please enter a number between 0 and 6." << endl;
          cin >> day;
        }
        while (day < 0 || day > 6);
    }
  // This pulls the varaible from above and makes that number the current day
    dayType monday(day);
    cout << "" << endl;
    cout << "Current day based on user input:" << endl;
    monday.printCurrentDay(); 
    cout << endl;

    // This tests the next day mutator that will advance the current day to the next one whose index is "day" + 1
    cout << "Next day:" << endl;
    monday.nextDay();
    monday.printCurrentDay();
    cout << endl;

    // This tests the previous day mutator that will move the current day to the previous one whose index is "day"
    cout << "Previous day:" << endl;
    monday.previousDay();
    monday.printCurrentDay();
    cout << endl;

    // This just sets the current day to Monday which is index 1 and then adds 4 days which means it will print friday
    monday.setCurrentDay(1);
    monday.addDays(4); // Add 4 days
    cout << "Set current day to Monday and add 4 days:" << endl;
    monday.printCurrentDay();
    cout << endl;

    // This sets the current day to Tuesday and adds 13 days which means it wil print monday
    monday.setCurrentDay(2); 
    monday.addDays(13); 
    cout << "Set current day to Tuesday and add 13 days:" << endl;
    monday.printCurrentDay(); 
    cout << endl;

    // This makes the index out of the range and make it issue an error using out_of_range functiono
    cout << "Trying to set current day to an invalid index (10):" << endl;
    monday.setCurrentDay(10); 
    monday.printCurrentDay(); 
    cout << endl;

    return 0;
}
