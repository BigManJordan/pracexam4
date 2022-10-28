#include "Employee.h"
#include <iostream>

Employee::Employee(){}

Employee::Employee(int payRate){
  m_pay = payRate;
  m_energyLevel = 100;
}

void Employee::takeABreak(int mins){
  m_energyLevel = m_energyLevel + (2*mins);
  if (m_energyLevel > 100){
    m_energyLevel = 100;
  }
  if (m_energyLevel < 0){
    m_energyLevel = 0;
  }
}

int Employee::get_payRate(){
  return m_pay;
}

void Employee::set_payRate(int payRate){
  m_pay = payRate;
}

float Employee::get_energyLevel(){
  return m_energyLevel;
}

void Employee::set_energyLevel(int energyLevel){
  m_energyLevel = energyLevel;
}
