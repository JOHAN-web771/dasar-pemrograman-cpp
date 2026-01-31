#include <stdio.h>

int main()
{
	float sisi, luas;
	printf("Masukkan sisi Persegi = ");
	scanf("%f", &sisi);
	luas= sisi * sisi;
	
	printf("Luas Persegi adalah = %.2f cm2\n", luas);
	
	return 0;
}
