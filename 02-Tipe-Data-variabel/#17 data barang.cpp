#include <stdio.h>

int main()
{
	char namaBarang [50];
	int jumlahBarang;
	float hargaPersatuan, hargaTotal;
	

	printf("Masukkan Nama Barang   :");
	scanf("%s", &namaBarang);
	
	printf("Masukkan Jumlah Barang :");
	scanf("%d", &jumlahBarang);
	
	printf("Masukkan Harga Barang  :");
	scanf("%f", &hargaPersatuan);
	
    hargaTotal = jumlahBarang * hargaPersatuan;
	
    printf("\n=== Data Barang ===\n");
	printf("Nama Barang     : %s\n", namaBarang);
    printf("Jumlah Barang   : %d\n", jumlahBarang);
    printf("Harga Persatuan : Rp%.2f\n", hargaPersatuan);
	printf("Harga Total     : Rp%.2f\n", hargaTotal);
	
	return 0;
	
}
