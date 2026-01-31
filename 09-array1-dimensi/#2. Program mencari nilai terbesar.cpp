#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Program menentukan nilai Maksimum"<<endl;
    cout<<"Masukkan Bilangan Yang ingin diinputkan: ";
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];

    int maks = a[0];
    for(int i=1;i<n;i++)
        if(a[i] > maks) maks = a[i];

    cout << maks;
    return 0;
}

