#include <stdio.h>

int main() {
	float a, b, tinggi,luas;
	printf("Masukkan Panjang Sisi Atas =  ");
	scanf("%f" , &a);
	
	printf("Masukkan Panjang Sisi Bawah =  ");
	scanf("%f" , &b);
	
	printf("Masukkan Tinggi Trapesium =  ");
	scanf("%f" , &tinggi);
	
	luas = 0.5 * (a + b) * tinggi;
	printf("Luas Trapesium adalah= %.2f cm2\n" , luas);
	
	return 0;
}
