#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Number of elements array should contain? : ";
    cin >> x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cout << "Enter element " << i+1 << " : "; 
        cin >> arr[i];
    }
    
    int y;
    cout << "Enter the number which you want to find : ";
    cin >> y;
    bool flag = false;
    for (int j=0; j<x; j++) {
        if (arr[j]!=y) {
            flag = false;
        }
        else {
            cout << "Found at index " << j << endl;
        }
    }
    if (!flag) {
        cout << "Element is not present in the array!";
    }

}