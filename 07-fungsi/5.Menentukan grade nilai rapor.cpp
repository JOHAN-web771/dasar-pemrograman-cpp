#include<iostream>
using namespace std;

char grade(int nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 55) return 'C';
    else return 'D';
}

int main(){
int nilaiA=85;
int nilaiB=55;
int hasil=grade(nilaiA);
int hasil1=grade(nilaiB);
cout<<"Predikat Nilai Budi Adalah: "<<hasil<<endl;
cout<<"Predikat Nilai Tono Adalah: "<<hasil1<<endl;

}
