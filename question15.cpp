#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter two floating point numbers: ";
    cin >> a >> b;

    float largest = (a > b) ? a : b;

    cout << "Largest number = " << largest;

    return 0;
} 
