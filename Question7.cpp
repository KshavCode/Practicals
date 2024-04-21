#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, q, r;
    cout << "Enter number 1 : ";
    cin >> x;
    cout << "Enter number 2 : ";
    cin >> y;
    a = x, b = y;
    if (x<y) {
        a = y;
        b = x;
    }
    
    while (r!=0) {
        q = a/b;
        r = a%b;
        a = b;
        b = r;
    }
    cout << "GCD : " << a << endl;
}