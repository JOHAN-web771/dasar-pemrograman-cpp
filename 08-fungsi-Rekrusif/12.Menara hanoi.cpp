#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << "Pindah 1 dari " << A << " ke " << C << endl;
        return;
    }
    hanoi(n-1, A, C, B);
    cout << "Pindah " << n << " dari " << A << " ke " << C << endl;
    hanoi(n-1, B, A, C);
}

int main(){
	cout << "{{ Program Menara HANOI Sederhana }}" <<endl;
    hanoi(3, 'A', 'B', 'C');
    cout << "Program Selesai!" <<endl;
}

