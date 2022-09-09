#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float metre;
    float mile;

printf ("entrer la distance en mile :");
scanf("%f",&mile);
metre=(mile/1.609)*1000;
printf ("la distance en metre est :%.3f",metre);
	
	return 0;
}
