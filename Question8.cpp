#include <iostream>
using namespace std;

class Matrix {
    int totalrows, totalcolumns;
    int arr[10][10]; 

public:
    void set(int r, int c) {
        totalrows = r;
        totalcolumns = c;
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                cout << "Enter element at position (" << i << "," << j << "): ";
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        cout << "Matrix: " << endl;
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(Matrix x, Matrix y) {
        if (x.totalrows != y.totalrows || x.totalcolumns != y.totalcolumns) {
            cout << "Addition not possible for different dimension matrices." << endl;
            return;
        }
        totalrows = x.totalrows;
        totalcolumns = x.totalcolumns;
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                arr[i][j] = x.arr[i][j] + y.arr[i][j];
            }
        }
    }

    void multiply(Matrix x, Matrix y) {
        if (x.totalcolumns != y.totalrows) {
            cout << "Matrix multiplication not possible. Dimensions do not match." << endl;
            return;
        }
        totalrows = x.totalrows;
        totalcolumns = y.totalcolumns;
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                arr[i][j] = 0;
                for (int k = 0; k < x.totalcolumns; k++) {
                    arr[i][j] += x.arr[i][k] * y.arr[k][j];
                }
            }
        }
    }

    void transpose() {
        int temp[10][10];
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                temp[j][i] = arr[i][j];
            }
        }
        
        swap(totalrows, totalcolumns);
        for (int i = 0; i < totalrows; i++) {
            for (int j = 0; j < totalcolumns; j++) {
                arr[i][j] = temp[i][j];
            }
        }
    }
};

int main() {
    int choice;
    Matrix mat1, mat2, result;
    int rows1, columns1, rows2, columns2;

    do {
        cout << "\nMatrix Operations Menu:\n";
        cout << "1. Set Matrix 1\n";
        cout << "2. Set Matrix 2\n";
        cout << "3. Add Matrices\n";
        cout << "4. Multiply Matrices\n";
        cout << "5. Transpose a Matrix\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of rows and columns for Matrix 1: ";
                cin >> rows1 >> columns1;
                mat1.set(rows1, columns1);
                break;
            case 2:
                cout << "Enter number of rows and columns for Matrix 2: ";
                cin >> rows2 >> columns2;
                mat2.set(rows2, columns2);
                break;
            case 3:
                result.add(mat1, mat2);
                cout << "Result of Addition:" << endl;
                result.display();
                break;
            case 4:
                result.multiply(mat1, mat2);
                cout << "Result of Multiplication:" << endl;
                result.display();
                break;
            case 5:
                cout << "Enter the matrix to be transposed (1 or 2): ";
                cin >> choice;
                if (choice == 1)
                    mat1.transpose();
                else if (choice == 2)
                    mat2.transpose();
                cout << "Transposed Matrix:" << endl;
                if (choice == 1)
                    mat1.display();
                else if (choice == 2)
                    mat2.display();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
