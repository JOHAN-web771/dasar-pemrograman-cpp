#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'a';
    if (isalpha(ch))
        cout << "Huruf\n";
    cout << char(toupper(ch));
    return 0;
}

