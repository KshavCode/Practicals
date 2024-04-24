#include <iostream>
using namespace std;

void AddrString(string x) {
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
void LengthString(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; 
    }
    cout << &str << endl;
    cout << "Length : " << length << endl;
}

int main() {
    int choice, index;
    string word, extra;
    char abc[100];
    bool flag = true;
    while (flag) {
        cout << "1. Show address of each character in string" << endl << "2. Concatenate two strings" << endl << "3. Compare two strings" << endl << "4. Calculate length of the string" << endl << "5. Convert all lowercase characters to uppercase" << endl << "6. Reverse the string" << endl << "7. Insert a string in another string at a user specified position" << endl << "8. Exit" << endl << endl;
        cout << "Enter choice number : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter string : ";
            cin >> word;
            cout << "Enter a string : ";
            AddrString(word);
            break;
        case 2: 
            cout << "Enter string : ";
            cin >> word;
            cout << "Enter a string : ";
            cout << "Enter 2nd string : ";
            cin >> extra;
            ConcatString(word, extra);
            break;
        case 3: 
            cout << "Enter string : ";
            cin >> word;
            cout << "Enter a string : ";
            cout << "Enter 2nd string : ";
            cin >> extra;
            CompareString(word, extra);
            break;
        case 4: 
            cout << "Enter string : ";
            cin.getline(abc, 100); 
            cout << "Enter a string : ";
            LengthString(abc);
            break;
        case 5:
            cout << "Enter string : ";
            cin >> word; 
            cout << "Enter a string : ";
            LowToUp(word);
            break;
        case 6: 
            cout << "Enter string : ";
            cin >> word;
            cout << "Enter a string : ";
            ReverseString(word);
            break;
        case 7:
            cout << "Enter string : ";
            cin >> word; 
            cout << "Enter a string : ";
            cout << "Enter 2nd string : ";
            cin >> extra;
            while (true) {
                cout << "Enter index number : ";
                cin >> index;
                if (index < 0 && index > word.length()) {
                    cout << "Incorrect Index!";
                    continue;
                }
                break;
            }
            InsertString(word, extra, index);
            break;
        case 8: 
            flag = false;
            break;
        default:
        cout << "Wrong input!";
            continue;
        }
    }

}
