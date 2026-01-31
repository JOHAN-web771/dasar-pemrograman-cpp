#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"*** Program sederhana menentukan Nilai terkecil ***"<<endl;
    cout<<"Masukkan Jumlah nilai yang ingin diinputkan: ";
	cin >> n;
    
	int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int minv = a[0];
    for(int i=1;i<n;i++)
        if(a[i] < minv) minv = a[i];

    cout << minv;
    return 0;
}
