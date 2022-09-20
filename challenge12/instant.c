#include<stdio.h>

int main()
{
    int h1,h2,m1,m2,s1,s2;
    printf("entrer le 1er instant:");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("entrer le 2eme instant:");
    scanf("%d %d %d",&h2,&m2,&s2);
    if(h1==h2 && m1==m2 && s1==s2) {
        printf("il s'agit du meme instant" );
    }
    else{
		if(h1>h2) {
        	printf("le 2eme instant vient avant le 1er");
    	}else if(h2>h1){
    		printf("le 1er instant vient avant le 2eme");
		}
    	else{
	    	if(m1>m2) {
	        	printf("le 2eme instant vient avant le 1er");
	    	}else if(m2>m1){
	    			printf("le 1er instant vient avant le 2eme");
			}	
		    	else{
			    	if(s1>s2) {
			        	printf("le 2eme instant vient avant le 1er");
			    	}else	printf("le 1er instant vient avant le 2eme");
				
				}
			}
    		
		}
    
   return 0;
}
