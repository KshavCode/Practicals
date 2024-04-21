#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    if (cin.fail()) {
        cout << "Please enter the correct integer value." << endl;
        cin.clear();
    }
    else {
        for(int i=1; i<=n; i++) {
            sum += 1/(pow(i, i));
        }
        cout << "Sum : " << sum << endl;
    }
}