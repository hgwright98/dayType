#include "dayType.h"
#include <iostream>
using namespace std;

// This creates a static array of days of the week that cannot be changed
const string dayType::daysOfTheWeek[] = {
    "Sunday", "Monday", "Tuesday", 
    "Wednesday", "Thursday", "Friday", "Saturday"
};

// This is a constructor that creates currentDay and sets it to 0 which is Sunday
dayType::dayType() : currentDay(0) {}

dayType::dayType(int index) {
    if (index < 0 || index > 6) {
        throw out_of_range("Index must be between 0 and 6");
    } else {
        currentDay = index;
    }
}
// Postconditions: the currentDay is set to 0 (Sunday), and days of the wwek is populated with days of the week

// This ia an accessor that returns the name of the current day
string dayType::getCurrentDay(){
    return daysOfTheWeek[currentDay];
}
//Postconditions: This returns the name of the current day based on the currentDay index.

// This is an accessor that returns the index of the current day
int dayType::getCurrentDayIndex() {
    return currentDay;
};
//Postconditions: This returns the integer index of currentDay(0-6)

// This is a mutator that advances to the next day
void dayType::nextDay() {
    currentDay = (currentDay + 1) % 7;
};
//Postconditions: This increments the currentday by 1 and if it is greater than 6 it will loop it back to 0 which is Sunday and go from there

// This is a mutator that moves to the previous day
void dayType::previousDay() {
    currentDay = (currentDay - 1 + 7) % 7; 
};
//Postconditions: This decrements the currentday by 1 and if it is less than 0 it will wrap around to 6 which is Saturday and go from there

// This is a mutator that adds n days to the current day
void dayType::addDays(int n) {
    currentDay = (currentDay + n) % 7; 
};
//Postconditions: This adds n days to the current day and if it is greater than 6 it will loop it back to 0 and if it is less than 0 it will wrap around to 6.

// This ia a mutator that sets the current day to the specified index
void dayType::setCurrentDay(int index) {
    if (index < 0 || index > 6) {
        throw out_of_range("Index must be between 0 and 6");
    } else {
        currentDay = index;
    }
};
//Postconditons: This sets the current day to the specified index and if it is out of range it will throw an error.

// This is a print function that prints the current day
void dayType::printCurrentDay() {
    cout << getCurrentDay() << endl;
};
//Postconditions: This prints the current day based on the currentDay index.