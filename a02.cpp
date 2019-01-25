/************************************************************** Program Name : Ohm's Law
** Filename : a02.cpp
** Author : Mise Majagira
** Date: January 16, 2019
** Assignment : 02
** Description : Voltage caculator using Ohm's law
** Sources: https://www.rapidtables.com/electric/ohms-law.html#formula
************************************************************/
#include <iostream>

using namespace std;

int main() {
  
  // Constant variables
  float current, resistance, voltage;

  // Defining values
  current = 0.0;
  resistance = 0.0;

  // Prompting user for current (meaasued in Amps)
  cout << "Enter current: "; 
  cin >> current; //500

  // Prompting user for resistance (measured in Ohms)
  cout << "Enter resistance: ";
  cin >> resistance; // .018

  voltage = current * resistance;

  // Outputing voltage (measured in Volts)
  cout << "Your voltage is " << voltage << endl;

  return 0;


}