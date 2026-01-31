#include <stdio.h>

int main () {
	float d1, d2, luas;
	
	printf("Masukan panjang diagonal 1: ");
	scanf("%f" , &d1);
	
	printf("Masukan panjang diagonal 2: ");
	scanf("%f" , &d2);
	luas = (d1 * d2) / 2;
	
	printf("Luas layang-layang = %.2f cm2\n", luas);
	
	return 0; 
	
};

