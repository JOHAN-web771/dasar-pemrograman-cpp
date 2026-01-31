#include <stdio.h>
#define Phi 3.14

int main(){
	float jari , keliling;
	printf ("Masukan jari-jari lingkaran: ");
	scanf("%f" , &jari);
	
	keliling = 2 * Phi * jari;

	printf("== Keliling Lingkaran: %.2f cm ==\n" , keliling);
	printf("==============================");
	
	return 0;
	
}
	
