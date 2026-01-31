#include <fstream>
using namespace std;

int main() {
    ofstream file("angka.txt");
    for(int i=1;i<=5;i++)
        file << i << endl;
}

