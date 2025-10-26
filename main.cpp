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
    // 2 = 2-Day
    if (shipMethod == 2) {
        if (cost <= 300) return 10 + 0.02 * cost;  // $10 + 2%
        return 0.0;                                // Free over $300
    }
    // 3 = Standard
    if (shipMethod == 3) {
        if (cost <= 50)  return 5.0;   // $5 for ≤ $50
        if (cost <= 100) return 10.0;  // $10 for $51–$100
        return 0.0;                    // Free over $100
    }

    return -1;
}
int main() {
    double cost;
    int shipMethod;
