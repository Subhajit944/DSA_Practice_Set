//Is number odd or even....
#include<iostream>

using namespace std;

int main() {

     int n;

    cout << "Enter  a number " << endl;
    cin >> n;

    if(n % 2 == 0) {
        cout << "Even Number" << endl;
    }else{
        cout << "Odd Number" << endl;
    }

    return 0;
}