#include <iostream>
#include <cmath>

using namespace std;

float total, breakeven;
int main() {
  cout << "enter total price of metrocard pass: ";

  cin >> total;

  breakeven = total/2.75;


  cout << "minimum number of rides to break even: " << ceil(breakeven);
}
