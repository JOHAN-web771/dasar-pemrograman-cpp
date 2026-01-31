#include <iostream>
using namespace std;

int main(){
    int A[2][2], B[2][2], C[2][2]={0};

    cout << "=== PROGRAM PERKALIAN MATRIKS 2x2 x 2x2 ===\n";

    cout << "\nMasukkan matriks A:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            cout << "A["<<i+1<<"]["<<j+1<<"]: ";
            cin >> A[i][j];
        }

    cout << "\nMasukkan matriks B:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            cout << "B["<<i+1<<"]["<<j+1<<"]: ";
            cin >> B[i][j];
        }

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                C[i][j]+=A[i][k]*B[k][j];

    cout << "\nHasil perkalian A x B adalah:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

