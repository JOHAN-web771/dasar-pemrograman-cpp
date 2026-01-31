#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string baris;
    while(getline(file, baris))
        cout << baris << endl;
}

