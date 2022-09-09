#include <stdio.h>




int main() {
	float m;
	float mile;
	
	printf("Entrer la distance en metre:");
	scanf("%f",&m);
	//km=(m/1000);
	mile=(m/1000)*1.609;
	printf("la valeur en mile est: %.3f",mile);
	return 0;
}
