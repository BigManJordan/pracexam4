#include "Manager.h"
#include "Employee.h"
#include <iostream>

Manager::Manager(){}
Manager::Manager(int payRate){
  m_pay = payRate;
  energyLevel = 100;
  hoursWorked = 0;
  daysWorked = 0;
}

void Manager::work(int mins){
  for (int i=0; i<mins; i++){
    if (hoursWorked == 8){
      hoursWorked = 0;
      daysWorked++;
      energyLevel = 0;
    }
    energyLevel = energyLevel - 0.25;
    if (energyLevel < 0){
      energyLevel = 0;
      break;
    }
    hoursWorked = hoursWorked + (1/60);
  }
}

float Manager::pay(){
  float payout = daysWorked * 8 * m_pay;
  return payout;
}

void Manager::set_hoursWorked(float hours){
  hoursWorked = hours;
}
void Manager::set_daysWorked(int days){
  daysWorked = days;
}
float Manager::get_hoursWorked(){
  return hoursWorked;
}
int Manager::get_daysWorked(){
  return daysWorked;
}

