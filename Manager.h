#ifndef Manager_h
#define Manager_h

#include <stdio.h>
#include <iostream>
#include "Employee.h"

class Manager : public Employee {
private:
  int m_pay;
  int energyLevel;
  float hoursWorked;
  int daysWorked;
public:
  Manager();
  Manager(int payRate);              // Create a Manager with a payRate
  void work(int mins) override;
  float pay() override;
  void set_hoursWorked(float hours);
  void set_daysWorked(int days);
  float get_hoursWorked();
  int get_daysWorked();
};

#endif
