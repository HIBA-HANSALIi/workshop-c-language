#include <stdio.h>
#include <stdlib.h>


int main() {
	
	 float f;
     float c;
  
  printf("Entrer la valeur en Fahrenheit :");
  scanf("%f",&f);
  c = (f-32)/1.8;
  
  printf("la valeur en degres celsius est = %.2f\n" , c);
  
	
	
	return 0;
}
