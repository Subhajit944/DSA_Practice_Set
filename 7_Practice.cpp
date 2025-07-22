//Min of 2 Numbers....
#include<iostream>
using namespace std;

int main(){
     int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

 
    if (a > b) {
        cout << "Minimum is: " << b << endl;
    } else if (b > a) {
        cout << "Mimimum is: " << a << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}