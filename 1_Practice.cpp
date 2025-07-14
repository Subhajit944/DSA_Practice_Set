#include <iostream>
using namespace std;

int main(){
    float P, R, T, SI;

    cout<< " Enter principal (P)";
    cin >> P;

    cout<< " Enter rate of Interest(R)";
    cin >> R;

    cout<< " Enter Time in year (T)";
    cin >> T;

    SI = P * R * T / 100;

    cout << "simple interest is :" << SI << endl;


    return 0;

}
