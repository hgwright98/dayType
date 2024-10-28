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

// This ia an accessor that returns the name of the current day
string dayType::getCurrentDay(){
    return daysOfTheWeek[currentDay];
}

// This is an accessor that returns the index of the current day
int dayType::getCurrentDayIndex() {
    return currentDay;
};

// This is a mutator that advances to the next day
void dayType::nextDay() {
    currentDay = (currentDay + 1) % 7;
};
// This is a mutator that moves to the previous day
void dayType::previousDay() {
    currentDay = (currentDay - 1 + 7) % 7; 
};

// This is a mutator that adds n days to the current day
void dayType::addDays(int n) {
    currentDay = (currentDay + n) % 7; 
};

// This ia a mutator that sets the current day to the specified index
void dayType::setCurrentDay(int index) {
    if (index < 0 || index > 6) {
        throw out_of_range("Index must be between 0 and 6");
    } else {
        currentDay = index;
    }
};

// This is a print function that prints the current day
void dayType::printCurrentDay() {
    cout << getCurrentDay() << endl;
};