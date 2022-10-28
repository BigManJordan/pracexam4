#ifndef Employee_h
#define Employee_h

#include <stdio.h>
#include <iostream>

class Employee{
private:
  int m_pay;
  int m_energyLevel;
public:
  Employee();
  Employee(int payRate);
  void takeABreak(int mins);
  int get_payRate();
  void set_payRate(int payRate);
  float get_energyLevel();
  void set_energyLevel(int energyLevel);
  virtual void work(int mins);
  virtual float pay();
};

#endif
