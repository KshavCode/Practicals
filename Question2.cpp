#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x[] = {1, 1, 23, 3, 5, 5, 2};
    int len = sizeof(x) / sizeof(int);
    
    for (int i = 0; i < len; i++) {
        for (int z = 0; z < len; z++) {
            if (i == z) {
                continue;
            }
            if (x[z] == x[i]) {
                x[i] = -999;
                break; 
            }
        }
    }

    for (int j = 0; j < len; j++) {
        if (x[j] != -999) {
            cout << x[j] << " ";
        }
    }

}
