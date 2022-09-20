 #include <stdio.h>
 #include <stdlib.h>

int main (){
    int i, n , dr=1;
    
	printf("entrer un nombre : ");   
	scanf("%d",&n);
	
	for (i=2;i<(n/2);i++)
		{
			if(n%i==0) 
				{
					dr=0;
				}
		}
		
		if(dr==0) printf("non premier ");
		else printf("est premier ");
		
	return 0;


}
