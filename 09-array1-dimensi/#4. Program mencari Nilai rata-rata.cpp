#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"+++ Program Mencari nilai rata-rata +++"<<endl;
	cout<<"Masukkan jumlah nilai yang ingin diinputkan: ";
	cin >> n;
    int a[n];
    double sum = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }

    cout << sum/n;
    return 0;
}


