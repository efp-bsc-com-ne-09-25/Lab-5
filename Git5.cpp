#include <iostream>
#include <limits>
using namespace std;

// Function for the area of a triangle.
double AreaTriangle(double base, double height) {
  return (base * height) / 2;
}

// Function for the area of a rectangle.
double AreaRectangle(double length, double width) {
  return length * width;
}

// Function for the area of a square.
double AreaSquare(double side) {
  return side * side;
}

int main() {
  int selection = 0;

  do {
    cout << "\nPlease select the area of the shape to calculate" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Quit Program" << endl;
    cout << "Enter your selection: ";

    if (!(cin >> selection)) {
      cout << "Invalid input! Please enter a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    switch (selection) {
      case 1: {
        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << "Area of a triangle = " << AreaTriangle(base, height) << endl;
        break;
      }
      case 2: {
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "The area of the rectangle = "
             << AreaRectangle(length, width) << endl;
        break;
      }
      case 3: {
        double side;
        cout << "Enter the side of the square: ";
        cin >> side;
        cout << "The area of the square = " << AreaSquare(side) << endl;
        break;
      }
      case 4:
        cout << "Program terminated." << endl;
        break;
      default:
        cout << "Invalid selection! Please select a valid option." << endl;
        break;
    }
  } while (selection != 4);

  return 0;
}