#include <stdio.h>

int main()
{
	char namaDepan [20];
	char namaBelakang [20];
	
	printf("Masukkan Nama Depan Anda = ");
	scanf("%s", &namaDepan);
	
	printf("Masukkan Nama Depan Anda = ");
	scanf("%s", &namaBelakang);
	
	printf("\n=== Data Anda ===\n");
	printf("Nama Depan Anda = %s\n", namaDepan);
	printf("Nama Belakang Anda = %s\n", namaBelakang);
	
	return 0;
	
}
