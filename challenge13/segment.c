#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    double x1,y1,x2,y2,a,b;
    double distance1,distance2,distance;
    printf("Entrez  x1 et y1\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Entrez  x2 et y2\n");
    scanf("%lf%lf",&x2,&y2);
    printf("Entrez  a et b\n");
    scanf("%lf%lf",&a,&b);
    
    distance1 = sqrt( pow((x1-a),2)+pow((y1-b),2) ); 
    distance2 = sqrt( (x2-a)*(x2-a)+(y2-b)*(y2-b) );
    distance = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) );
    
    
    if( distance == distance1 + distance2 ){
	
	printf("Le point est sur le segment.\n");
	
	}
    else{
    printf("Le point n'est pas sur le segment.\n");
    
	}

    return 0;
}

