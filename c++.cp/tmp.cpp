#include <iostream>
int main() {
    using namespace std;
    int deg;
    cout << "Enter degrees in Celsius: ";
    cin >> deg;
    double fah = (deg * 9.0 / 5.0 )+ 32;
    cout << deg << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;
    return 0;   
}