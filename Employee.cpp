#include "Employee.h"
#include <iostream>

Employee::Employee(){}

Employee::Employee(int payRate){
  m_pay = payRate;
  energyLevel = 100;
}

void Employee::takeABreak(int mins){
  energyLevel = energyLevel + (2*mins);
  if (energyLevel > 100){
    energyLevel = 100;
  }
  if (energyLevel < 0){
    energyLevel = 0;
  }
}

int Employee::get_payRate(){
  return m_pay;
}

void Employee::set_payRate(int payRate){
  m_pay = payRate;
}

float Employee::get_energyLevel(){
  return energyLevel;
}

void Employee::set_energyLevel(int energyLev){
  energyLevel = energyLev;
}

