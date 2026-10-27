#include <iostream>
#include <limits>
using namespace std;

int main() {
  int number;
  cout << "Enter an integer between 5 and 10: ";

  while (!(cin >> number) || number < 5 || number > 10)
  {
    cout << "Invalid input! Enter an integer between 5 and 10:";
    
    cin.clear();
    cin.ignore(numeric_limits<streamsize::max(),'\n');

  }

   cout << "Your input has been accepted." << endl;
  
  return 0;
}