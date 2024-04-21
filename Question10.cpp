#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    public : 
        float area(float b, float h) {
            float ar = (1/2.0)*b*h; 
            cout << "Area of this right angled triangle is : " << ar << endl;
        }
        float area(float a, float b, float c) {
            float s = (a+b+c)/2;
            float ar = s*(s+a)*(s+b)*(s+c);
            ar = sqrt(ar);
            cout << "Area of this triangle is : " << ar << endl;
        }

};

int main() {
    Triangle obj1;
    int n;
    cout << "How many values you are going to enter (2 or 3) : ";
    cin >> n;
    if (n!=2 && n!=3) {
        cout << "Kindly enter a valid value!";
    }
    else {
        if (n==2) {
            int x, y;
            cout << "Enter number 1 : ";
            cin >> x;
            cout << "Enter number 2 : ";
            cin >> y;
            obj1.area(x, y);   
        }
        else {
            int x, y, z;
            cout << "Enter number 1 : ";
            cin >> x;
            cout << "Enter number 2 : ";
            cin >> y;
            cout << "Enter number 3 : ";
            cin >> z;
            if (x<=0 || y<=0 || z<=0) {
                cout << "No value should be below or equal to 0!";
            }
            else if (x+y<z || x+z<y || y+z<x) {
                cout << "Not a valid triangle as sum of any two sides is not greater than the third side.";
            }
            else {
                obj1.area(x, y, z);
            }
        }
    }
}