#include <iostream>

using namespace std;

#include "tests.cpp"
int main() {
double cost;
int shipMethod;
cout << "Enter the cost of your order: ";
cin >> cost;
cout << "Enter your shipping method: ";
cin >> shipMethod;
double shipping = getShippingCost(shipMethod, cost);
