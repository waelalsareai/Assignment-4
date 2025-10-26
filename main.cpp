#include <iostream>
#include <iomanip>
using namespace std;

double getShippingCost(int shipMethod, double cost) {
    if (cost < 0 || shipMethod < 1 || shipMethod > 3) return -1;
    
