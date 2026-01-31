#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 2*i-1; j++) {
            cout << 2*j-1;
        }
        cout << endl;
    }
    return 0;
}

