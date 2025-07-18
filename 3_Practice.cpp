//Calculate factorial of a number N (n!).....
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial does not exist for negative numbers.";
    } else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is " << factorial;
    }

    return 0;
}