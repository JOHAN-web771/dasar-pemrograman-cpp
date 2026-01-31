#include <stdio.h>

int main(){
	char nama [50];
	char nim [20];
	char prodi [20];
	char tempat_tinggal [100];
	
	
	printf("Masukan nama anda: ");
	scanf("%s" , nama);
	
	printf("Masukan NIM anda: ");
	scanf("%s" , nim);
	
	printf("Masukan Prodi anda: ");
	scanf("%s" , prodi);
	
	printf("Masukkan alamat anda: ");
	scanf("%s" , tempat_tinggal);
	
    printf("\n--- Data Anda ---\n");
    printf(" Nama   : %s\n", nama);
    
	printf(" NIM    : %s\n ", nim);
	
	printf("prodi  : %s\n ", prodi);
    
	printf("Alamat : %s\n ", tempat_tinggal);
	
	
	
	return 0;
}
