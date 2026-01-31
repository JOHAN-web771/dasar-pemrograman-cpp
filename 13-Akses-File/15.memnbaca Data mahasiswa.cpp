#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("mhs.txt");
    string s;
    while(getline(file, s))
        cout << s << endl;
}

