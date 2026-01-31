#include <stdio.h>

int main()
{
	char merk [30];
	float harga = 2000000;
	
	printf("Masukan merk HP anda = ");
	scanf("%s" , merk);
	
	printf("Masukan Harga HP anda = ");
	scanf("%f" , &harga);
	
	printf("Merk HP yang anda masukan adalah = %s\n" , merk);
	printf("Harga HP yang anda masukkan adalah = %.2f" , harga);
	
}
