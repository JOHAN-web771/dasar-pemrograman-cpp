#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "Halo Dunia";
    file.close();
}

