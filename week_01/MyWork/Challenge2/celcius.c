
#include <stdio.h>

int main() {
  
  float f;
  float c;
  
  printf("Entrer la valeur en celsius :");
  scanf("%f",&c);
  f=(c*1.8)+32;
  
  printf("la valeur en degres Fahrenheit est = %.2f" , f);
  return 0;
}
