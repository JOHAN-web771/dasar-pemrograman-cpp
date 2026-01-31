#include <iostream>
using namespace std;

int main() {
    string nama[3] = {"Ani", "Budi", "Citra"};
    
    cout << "\n{ Program Sederhana Menampilkan Beberapa Nama Orang }\n";

for(int i = 0; i < 3; i++) {
    cout << "Nama Ke- " << i+1 << " Adalah : " << nama[i] << endl;
}
	return 0;
	}

