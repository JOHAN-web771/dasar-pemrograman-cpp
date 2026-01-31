#include<iostream>
using namespace std;
	
int kali(int a,int b){ 
    return a*b; 
} 
  
int main () { 
    int x,y; 
    x=4;  y=8;
    cout << "\n{{ Program Perkalian Sederhana }}\n";
    cout << "A: "<< x <<endl;
    cout << "B: "<< y <<endl;
    cout << "Hasil Perkalian A * B adalah: "<<kali(x,y);
    cout << "\nProgram Selesai!\n";
}
