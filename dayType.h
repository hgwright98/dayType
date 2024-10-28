#ifndef DAY_TYPE_H
#define DAY_TYPE_H
#include <iostream>
#include <string>
using namespace std;

class dayType{
private:
  int currentDay;
  static const string daysOfTheWeek[7];

public:
  dayType();
  dayType(int);
  string getCurrentDay();
  void setCurrentDay(int);
  int getCurrentDayIndex();
  void nextDay();
  void previousDay();
  void addDays(int n);
  void printCurrentDay();
};

#endif // DAY_TYPE_H