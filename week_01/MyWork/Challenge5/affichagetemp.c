
#include<stdio.h>


int main() {
	
	 float f;
     float c;
  
  printf("Entrer la valeur en Fahrenheit :");
  scanf("%f",&f);
  c = (f-32)/1.8;
  
  printf("la valeur en degres celsius est = %.2f\n" , c);
  
  if (c<0){
    printf("tres froid");
}
  else if(c>0 && c<20){
    printf("froid");
}
else if(c>35 && c<40 ){
    printf(" chaud");

}
else{
    printf(" tres chaud");


}

}
