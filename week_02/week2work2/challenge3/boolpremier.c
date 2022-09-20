# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>



bool isPremier(n){
int i;
for(i=2; i<n;i++){
if (n%i==0) return false;
}
return true;

}
 
int main(){
int n;
printf("Entrer un nombre:");
scanf("%d",&n);
if (isPremier(n)) printf("ce nombre est premier");
else printf("ce nombre n'est pas premier");
return 0;

		 }
