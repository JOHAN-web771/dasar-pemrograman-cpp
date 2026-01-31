#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);
    file << "\npSaya dari riau!";
}

