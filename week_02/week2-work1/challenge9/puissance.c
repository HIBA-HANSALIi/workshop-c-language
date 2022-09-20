# include <stdio.h>
# include <stdlib.h>
# include <math.h>



int main (){
	int x,y,p;
	
	do {
		printf("Entrer la base et l'exposant: ");
		scanf("%d%d",&x,&y);
		p=pow(x,y);
	}while (x<=0 || y<0 );
	printf("%d",p);
	
	return 0;
	
	    }
