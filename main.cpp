// Program Greet prints a greeting on the screen.
#include <iostream>
#include <string>
using namespace std;

const string FIRST_NAME = "Sarah";
const string LAST_NAME = "Sunshine";

int main ()
{
  string message;
  string name;
  char MIDDLE_NAME;

  cout << "Middle name: ";  //JZ - prompt for middle name
  cin >> MIDDLE_NAME;

  name = FIRST_NAME + ' ' + MIDDLE_NAME + ' ' + LAST_NAME;  //concatonate full name
  message = "\nGood morning"; //build message for output
  message = message  + ' ' + name + '.';
 
  cout  << message << endl; //output message
  return 0;

/*****************************
*Story 1:
*update to collect and output full middle name
*
*****************************/


/*****************************
*Story 2:
*update to allow custom greeting + full name
*
*****************************/  
  
  }
