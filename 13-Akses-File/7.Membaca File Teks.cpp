#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string teks;
    getline(file, teks);
    cout << teks;
}

