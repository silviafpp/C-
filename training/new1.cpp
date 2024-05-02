#include <iostream>
using namespace std;

int column = 0;
int row = 0;
int small;

int matrizz[3][3] = {{5, 0, 3}, {4, 3, 6}, {7, 8, 9}};

void matriz(int matrix[][3]) {
  
    small = matrix[0][0];
    int l=0;
        
    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            if (matrix[row][column] < small) {
                small = matrix[row][column];
                l=row;
            }
        
                
        }
    }
}

int main() {
    matriz(matrizz);

    cout << "The smallest number is: " << small << endl;
    cout << "Line: " << row << endl;
    return 0;
}
