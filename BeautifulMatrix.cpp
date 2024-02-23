#include <iostream>

using namespace std;

int main() {
    const int size = 5; // Size of the matrix
    int matrix[size][size];
    int row = 0;
    int column = 0;

    // Input: Read the matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Output: Find the position of the 1 in each row
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] == 1) {
                row = i+1;
                column = j+1;
                break; // Move to the next row
            }
        }
    }
    int r = 0;
    int c = 0;

    if(row>3){
        r = row - 3;
    }else{
        r = 3 - row;
    }

    if(column>3){
        c = column - 3;
    }else{
        c = 3 - column;
    }

    cout<<r+c;
    
    return 0;
}
