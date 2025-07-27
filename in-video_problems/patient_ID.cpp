#include <iostream>
using namespace std;

void findPatientID(int mat[4][4], int target) {
    int row = 0, col = 3;  // Start from the top-right corner

    while (row < 4 && col >= 0) {
        if (mat[row][col] == target) {
            cout << "Patient ID found at row " << row << " and column " << col << "." << endl;
            return;
        } else if (mat[row][col] > target) {
            col--;  // Move left
        } else {
            row++;  // Move down
        }
    }

    cout << "Element not found." << endl;
}

int main() {
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int target;

    cout << "Enter the patient ID to search: ";
    cin >> target;

    findPatientID(mat, target);

    return 0;
}
