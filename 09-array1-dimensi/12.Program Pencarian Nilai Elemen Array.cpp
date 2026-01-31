#include <iostream> 
using namespace std; 


int main() {
 int x, bilanganBulat[10] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7}; 


	cout << "Isi array: "<<endl; 
		for(int i=0; i<10; i++){
	      cout << "Indeks ["<<i<<"] = "<<bilanganBulat[i]<<endl; 
}
	
	cout <<"\nMasukkan data yang ingin anda cari: "; 
	cin >>x; 
	cout <<endl; 
	
	for(int i=0; i<10; i++){ 
		if (bilanganBulat[i] == x)
		 
			cout <<"Data yang anda cari berada pada indeks ke "<<i<<endl; 
			 
}

cout << "\nTerimakasih Telah Mencoba Program ini ;}"; 
return 0;

}
