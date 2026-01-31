#include <stdio.h>

int main () { 
	float sisi1, sisi2, keliling;
	
	printf("Masukan  panjang sisi 1: ");
	scanf("%f" , &sisi1);
	
	printf("Masukan  panjang sisi 2: ");
	scanf("%f" , &sisi2);
	
	keliling = 2 * (sisi1 + sisi2);
	printf("keliling layang-layang = %.2f cm\n", keliling);
	
	return 0; 
}
