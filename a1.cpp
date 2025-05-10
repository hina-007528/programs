#include <iostream>
using namespace std;

// Function to calculate the amount of paint mixture needed
double calculatePaintMixture(double roomsPainted, double quantityUsed, double roomsToPaint) {
    // Calculate the amount of paint needed per room
    double paintPerRoom = quantityUsed / roomsPainted;
    
    // Calculate the total paint needed for the desired number of rooms
    double requiredMixture = paintPerRoom * roomsToPaint;
    
    return requiredMixture;
}

int main() {
    double roomsPainted, quantityUsed, roomsToPaint;

    // Input the number of rooms painted, quantity of paint used, and number of rooms to be painted
    cout << "Enter the number of rooms painted already: ";
    cin >> roomsPainted;
    
    cout << "Enter the quantity of paint mixture used (in liters): ";
    cin >> quantityUsed;
    
    cout << "Enter the number of rooms you want to get painted: ";
    cin >> roomsToPaint;
    
    // Calculate the required mixture
    double requiredMixture = calculatePaintMixture(roomsPainted, quantityUsed, roomsToPaint);
    
    // Output the result
    cout << "You need " << (int(requiredMixture * 100 + 0.5) / 100.0) << " liters of paint mixture to paint " << roomsToPaint << " rooms." << endl;

    return 0;
}
