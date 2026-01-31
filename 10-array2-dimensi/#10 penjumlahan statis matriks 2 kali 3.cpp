#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    int C[2][2] = {0}; // matriks hasil

    cout << "\n{ Program Perkalian Statis Matriks 2 x 2 }\n";
    cout << "--------------------------------------------\n";

    cout << "Matriks A:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Proses perkalian matriks
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nHasil Perkalian Matriks A x B:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

