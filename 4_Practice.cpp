// Given a persons age find if they should get a driving licence or not.....
#include <iostream>
using namespace std;

int main() {

    int age;
    
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18) {
        cout << "Eligible for driving licence.";
    } else {
        cout << "Not eligible for driving licence.";
    }

    return 0;
}
