#include <iostream>
#include <cmath>
using namespace std;
int main() {
  const double Pi = 3.14;
  cout << "Pi equals " << Pi << "\n";
  int diameter = 6;
  double circumference = Pi * diameter; 
  double radius = diameter / 2;
  double area = pow(radius,2) * (Pi);
  cout << "The circumference of a circle with a diameter of " << diameter <<" is " << circumference << ".\n\n";

  cout << "Enter the diameter of a circle: ";
  int mydiameter;
  cin >> mydiameter; 
  double mycircumference = Pi * mydiameter; 
  double myradius = mydiameter / 2;
  double myarea = pow(myradius,2) * (Pi);
  cout << "The circumference of a circle with a diameter of " << mydiameter << " is " << mycircumference << " and the area is " << myarea <<". \n";
return 0;  
}