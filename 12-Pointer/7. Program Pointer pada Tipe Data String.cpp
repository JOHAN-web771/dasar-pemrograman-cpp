#include <iostream>
using namespace std;

int main() {
    string nama = "JOHAN HANGGARA HASIHOLAN";
    
    // deklarasi pointer bertipe string
    string *ptrNama = &nama;

    // mencetak isi pointer (nilai string)
    cout << "Isi pointer  : " << *ptrNama << endl;

    // mencetak alamat memori pointer
    cout << "Alamat pointer: " << ptrNama << endl;

    
}
