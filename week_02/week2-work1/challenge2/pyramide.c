# include <stdio.h>
# include <stdlib.h>

int main () {
int i, n,j, et=1, es;
scanf("%d", &n);
es=n-1;
for(i=0;i<n;i++){
      for(j=0;j<es;j++){

printf(" ");
}
     for(j=0;j<et;j++){
     	
printf("*");
}

printf("\n");
et+=2;
es--;
}
}
