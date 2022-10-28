#include <stdio.h>
#include "Employee.h"
#include "Manager.h"
#include <iostream>
using namespace std;

int main(){
  Manager bill(20);
  cout << bill.get_hoursWorked() << " " << bill.get_daysWorked() << endl;
  cout << bill.get_payRate() << " " << bill.get_energyLevel() << endl;
  bill.work(60);
  cout << bill.get_hoursWorked() << " " << bill.get_daysWorked() << endl;
  cout << bill.get_payRate() << " " << bill.get_energyLevel() << endl;
}
