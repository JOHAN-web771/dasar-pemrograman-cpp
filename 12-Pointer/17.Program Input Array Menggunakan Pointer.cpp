#include <iostream>
using namespace std;

int main() {
    int arr[3];
    int *p = arr;

    for(int i=0;i<3;i++){
        cout << "Input elemen ke-" << i+1 << ": ";
        cin >> *(p+i);
    }

    cout << "Isi array: ";
    for(int i=0;i<3;i++)
        cout << *(p+i) << " ";
}

