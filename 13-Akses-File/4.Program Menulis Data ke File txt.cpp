#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;
    file.open("file.txt", ios::out);

    if (!file.is_open()) {
        cout << "File tidak dapat dibuka!" << endl;
        return 1;
    }

    file << "Laprak14";

    string line;
    int i = 0;

    while (i < 4 && getline(file, line)) {
        cout << line << endl;
        i++;
    }

    file.close();
    return 0;
}

