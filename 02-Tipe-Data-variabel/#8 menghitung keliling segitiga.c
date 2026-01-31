#include <stdio.h>

int main() {
	float A,B,C, keliling;
	printf("Masukkan sisi A = ");
	scanf("%f" ,&A);
	
	printf("Masukkan sisi B = ");
	scanf("%f" ,&B);
	
	printf("Masukkan sisi c = ");
	scanf("%f" ,&C);
	
	keliling = A + B + C;
	printf("Keliling segitiga adalah = %.2f cm\n" , keliling);
	
	return 0;
	
}
