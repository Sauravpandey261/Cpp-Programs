#include <iostream>
#include <string>
using namespace std;

int main() {
    string className;
    double fees;

    // Prompt user for class name and fees
    cout << "Enter the name of the class: ";
    getline(cin, className);
    cout << "Enter the fees for " << className << ": $";
    cin >> fees;

    // Verify that fees are within valid range
    if (fees < 0) {
        cout << "Error: fees cannot be negative." << endl;
    } else if (fees < 100) {
        cout << "Warning: fees for " << className << " are lower than average." << endl;
    } else if (fees > 1000) {
        cout << "Warning: fees for " << className << " are higher than average." << endl;
    } else {
        cout << "Fees for " << className << " are valid." << endl;
    }

    return 0;
}

