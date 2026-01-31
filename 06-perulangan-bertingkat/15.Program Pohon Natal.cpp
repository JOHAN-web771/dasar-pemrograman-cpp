#include<iostream>
using namespace std;

int main(){
	int tinggi;
	cout<<"Masukkan Tinggi Pohon: ";cin>>tinggi;
	
	for(int i=1; i<=tinggi; i++){  // Cetak spasi
        	for (int j = 1; j <= tinggi - i; j++) {
                 	cout << " ";
        }
       	 // Cetak bintang
        	for (int k = 1; k <= 2 * i - 1; k++) {
            		cout << "*";
        }
        cout << endl;
        
    }
    cout << "\n	||||\n";
    cout << " 	 ||\n";

    return 0;
}

	

