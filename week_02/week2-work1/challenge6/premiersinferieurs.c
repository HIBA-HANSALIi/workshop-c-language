#include<stdio.h>
#include<conio.h>


int main()
{
int nbr , i ,p;
    int f ;
    printf("donner un nombre : ");
    scanf ("%d",&nbr);
   
for(p=2;p<nbr;p++)
{
f=0;

for(i=2;i<p;i++)
{
if(p%i==0)
{
f=1;
}
}

if(f==0) printf("%d\n",p);
}


getch();
return 0;
}
