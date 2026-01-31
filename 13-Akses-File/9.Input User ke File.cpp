#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("nama.txt");
    string nama;
    cout << "Nama: ";
    cin >> nama;
    file << nama;
}

