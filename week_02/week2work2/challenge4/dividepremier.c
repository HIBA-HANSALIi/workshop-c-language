
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
 int divededby(int a, int b) {
  int c;
c = a / b;
return c;
}
bool isPremier(int c){
int i;
for(i=2; i<c;i++){
if (c%i==0) return false;
}
return true;
}

int main (){
int a,b,c;
printf("Entrer la valeur de a et b:");
scanf("%d%d",&a,&b);
c = divededby( a,b);
printf("%d \n" , c);
if (isPremier(c)) printf("ce nombre est premier");
else printf("ce nombre n'est pas premier");
return 0;
}
	
	


