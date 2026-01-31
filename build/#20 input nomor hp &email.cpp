#include <stdio.h>

int main()
{
	char nomorHp [20];
	char email[100];
	
	printf("Masukkan Nomor Hp anda : ");
	scanf("%s", nomorHp);
	
	printf("Masukan Email Anda :  ");
	scanf("%s", &email);	
	
	printf("\nNomor Hp Anda Inputkan : %s\n", nomorHp);
	printf("Email Anda             : %s ", email);
	
	
	return 0;
	
}
