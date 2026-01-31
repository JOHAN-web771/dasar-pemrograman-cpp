#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("data.txt");
    if(file)
        cout << "File ditemukan";
    else
        cout << "File tidak ada";
}

