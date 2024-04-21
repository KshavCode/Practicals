#include <iostream>
using namespace std;

void AddString(string x) {
    void *a;
    for (int i=0; i<x.length(); i++) {
        a = &x[i];
        cout << x[i] << " = " << a << endl;
    }
}
void ConcatString(string x, string y) {
    cout << x+y << endl;
}
void CompareString(string x, string y) {
    if (x>y) {
        cout << x << " > " << y << endl;
    }
    else if (x<y) {
        cout << x << " < " << y << endl;
    }
    else {
        cout << "Both are same/equal." << endl;
    }
}
void ReverseString(string x) {
    int i = x.length();
    while (i>=0) {
        cout << x[i--];
    }
    cout << endl;
}
void InsertString(string x, string y, int num) {
    for (int i=0; i<x.length(); i++) {
        if (i==num) {
            for (int j=0; j<y.length(); j++) {
                cout << y[j];
            }
        }
        else {
            cout << x[i];
        }
    }
    cout << endl;
}

void LowToUp(string x) {
    char y;
    for (int i=0; i<x.length(); i++) {
        y = x[i];
        cout << char(int(y)-32);
    }
    cout << endl;
}

int main() {
    AddString("Aeroplane");
    ConcatString("Hello", "Bye");
    CompareString("Good", "Bye");
    ReverseString("Aeroplane");
    InsertString("Aeroplane", "Hello", 1);
    LowToUp("boy");
}
