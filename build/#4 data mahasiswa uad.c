#include <stdio.h>

int main ()
{
	char nama [20];
	char nim [50];
	
	printf("Masukkan Nama Depan Anda = ");
	scanf("%s" , &nama);
	

	printf("Masukkan NIM Anda        = ");
	scanf("%s" , &nim );
	
	
	printf("\n====Data Mahasiswa UAD===\n");
	printf("  Nama Anda adalah = %s\n ", nama);
	printf(" NIM anda adalah  = %s\n ", nim);
	printf("=============================");
	
	return 0;
	
}
