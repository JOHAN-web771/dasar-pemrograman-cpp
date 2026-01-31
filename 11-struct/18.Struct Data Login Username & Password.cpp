#include <iostream>
using namespace std;

struct Login {
    string username;
    string password;
};

int main() {
    Login l;

    cout << "Username : ";
    cin >> l.username;
    cout << "Password : ";
    cin >> l.password;

    cout << "\nLogin berhasil untuk user " << l.username;
    return 0;
}

