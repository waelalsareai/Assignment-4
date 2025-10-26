#include <iostream>
#include <iomanip>
using namespace std;

double getShippingCost(int shipMethod, double cost) {
    if (cost < 0 || shipMethod < 1 || shipMethod > 3) return -1;
    // 1 = Drone
    if (shipMethod == 1) {
        if (cost < 100) return -1;        // Not available
        if (cost < 500) return 50.0;      // $50 for $100–$499.99
        return cost * 0.10;               // 10% for $500+
    }
    
