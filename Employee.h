#ifndef Employee_h
#define Employee_h

#include <stdio.h>
#include <iostream>

class Employee{
private:
  int m_pay;
  int energyLevel;
public:
  Employee();
  Employee(int payRate);
  void takeABreak(int mins);
  int get_payRate();
  void set_payRate(int payRate);
  float get_energyLevel();
  void set_energyLevel(int energyLev);
  virtual void work(int mins) = 0;
  virtual float pay() = 0;
};

#endif
