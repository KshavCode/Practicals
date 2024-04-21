#include <iostream>
using namespace std;

int main() {
    int m=4, n=4;
    int list1[m] = {1, 2, 3, 4};
    int list2[n] = {1, 3, 4, 8};
    int list3[m+n];
    int x = 0;
    for (int i=0; i<m; i++) {
        list3[i] = list1[i];
        x++;
    }
    for (int j=0; j<n; j++) {
        list3[x] = list2[j];
        x++;
    }
    int temp;
    for (int i=0; i<m+n; i++) {
        for (int j=i+1; j<m+n; j++) {
            if (list3[j]<list3[i]) {
                temp = list3[i];
                list3[i] = list3[j];
                list3[j] = temp;
            }
        }
    }
    for (int y=0; y<m+n; y++) {
    cout << list3[y] << " ";
    }
}
