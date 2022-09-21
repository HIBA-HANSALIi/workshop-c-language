#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define Max 100


//sructure
typedef struct Date 
{
	int day ,month ,year;
}date;

typedef struct Produit{
    int code;
    char nom[50];
    int quantite;
    float prix;
    float prixTTC;
    float somPrixTotal;
    date d;
    

}Produit;

int sizeV=0;
Produit produit[Max];
date d;
int np=0;
//float somPrixTotal =0;
int somQuantite =0;

Produit prodVendus[Max];

//fonctions
void ajouterproduit(){
	printf("\n *************************************\n");
    printf("\nentrer le code du produit :");
    scanf("%d",&produit[np].code);
    printf("entrer le nom du produit :");
    scanf("%s",&produit[np].nom);
    printf("entrer la quantite du produit :");
    scanf("%d",&produit[np].quantite);
    printf("entrer le prix du produit :");
    scanf("%f",&produit[np].prix);
    produit[np].prixTTC = produit[np].prix + (produit[np].prix * 0.15);
    printf("le prixTTC du produit : %.2f", produit[np].prixTTC);
    
    np++;
    printf("\n *************************************\n");
}
void ajouterPlusieurProduit(){
    int i , nbr;
    printf("entrer le nombre de produit :");
    scanf("%d",&nbr);
    for(i=0;i<nbr;i++){
        ajouterproduit();
    }
}
void afficher(){
     int i; 
    for(i=0;i<np;i++){
    	printf("\n ---------------------------- \n");
    	printf("\n |*/*/*/*/|	Affichage	|*/*/*/*/| \n");
    	printf("\n ---------------------------- \n");
        printf("nom = %s\t",produit[i].nom);
        printf("code = %d\t",produit[i].code);
        printf("quantite = %d\t",produit[i].quantite);
        printf("prix = %f\t",produit[i].prix);
        printf("prixttc = %f\t",produit[i].prixTTC);
        
    }
}
void alphabetcroissant(){
    int i,j;

    for(i=0;i<np;i++){
         for(j=i+1;j<np;j++){
            if(strcmp(produit[i].nom,produit[j].nom)>0){
                Produit zone;
                zone=produit[i];
                produit[i]=produit[j];
                produit[j]=zone;
            }
         }
    }
    afficher();
}
void prixdecroissant(){
    int i,j;

    for(i=0;i<np;i++){
         for(j=i+1;j<np;j++){
            if(produit[i].prix < produit[j].prix){
                Produit zone;
                zone=produit[i];
                produit[i]=produit[j];
                produit[j]=zone;
            }   
         }
   }
   afficher();
}
// recherche par code:
 void Frecherchecode(){
  	    int c,i;
        printf("\n-----------------------------------------\n");
        printf(" -> 1 : chercher avec le code de produit :\n");
        printf("-----------------------------------------\n");
             printf("recherche un produit ");
                      printf("donner le code de produit que vous rechercher ;");
                      scanf ("%d",&c);
                      for(i=0;i<np;i++){
                       if(produit[i].code == c){
                    printf("code    nom      prix      quantite \n");
                    printf("%d      %s      %.2fdh        %d     \n",produit[i].code , produit[i].nom , produit[i].prix , produit[i].quantite);
                    break ;
					}
					
                    }
                   
    }
// recherche par quantite:
  
void Frecherchequantite(){
  	    int q,i;
        printf("\n-----------------------------------------\n");
        printf(" -> 2 : chercher avec le nom de produit  :\n");
        printf("-----------------------------------------\n");
             printf("recherche un produit ");
                      printf("donner la quantite de produit que vous rechercher ;");
                      scanf ("%d",&q);
                      for(i=0;i<np;i++){
                       if(produit[i].quantite == q){
                    printf("code    nom      prix      quantite \n");
                    printf("%d      %s      %.2fdh        %d     \n",produit[i].quantite , produit[i].nom , produit[i].prix , produit[i].quantite);
                    break ;             } 
                    }
    }
void Fsupprimer()
	{
	int i ,c,position;
        printf("supprimer un produit \n:");
	    printf("donner le code de produit que vous supprimer :");
	    scanf ("%d",&c);
	
	    for(i=0;i<np;i++)
		{
	       if(c ==produit[i].code )
		   {
	        printf("%d",i);
	        position = i;
	        for (i=position;i<np;i++){
	           produit[i]=produit[i+1];
	           np--;
	          break;
	     	}
	     	}
	   		}
    }
void alimenterStock(){
	int i,code,quantite;
	printf("entre le code de produit :");
	scanf("%d",&code);
	printf("entre la quantite de produit :");
	scanf("%d",&quantite);
	for(i=0;i<np;i++){
		if(produit[i].code==code){
			produit[i].quantite += quantite;
	}
	break;
    }
    }  
    void etat_stock(){
   	int i;
   	for(i=0;i<np;i++){
   	if(produit[i].quantite<=3){
   		printf("nom: %s",produit[i].nom);
   		printf("code: %d",produit[i].code);
   		printf("prix: %f",produit[i].prix);
	         }
              }
              }

 void acheterProduit(){

    int i, code, quantite,count=0;
    float produittotal;
    
    time_t tt = time(NULL);
  	struct tm* dt = localtime(&tt);
  	
  	
  	
    printf("\nentrer le code de produit : ");
    scanf("%d", &code);

    printf("entrer la quantite de produit :");
    scanf("%d", &quantite);
    for (i = 0; i < np; i++)
    {
        if (produit[i].code == code)
        {
            if (produit[i].quantite >= quantite)
            {
                produit[i].quantite -= quantite;
                printf("le nom de medicament %s  | PrixTTC x quantite = %.2f  | ",produit[i].nom,produit[i].prixTTC*quantite);
				printf(" %.2d/%.2d/%.2d\n",dt->tm_mday,dt->tm_mon+1,dt->tm_year+1900);
			
			produittotal = quantite*produit[i].prixTTC;
		
			
			
			prodVendus[sizeV] = produit[i];
//			prodVendus[sizeV].code=produit[i].code;
//			prodVendus[sizeV].prixTTC += produit[i].prixTTC;
//			strcpy(prodVendus[sizeV].nom,produit[i].nom);
//			prodVendus[sizeV].quantite=quantite;
			prodVendus[sizeV].somPrixTotal += produittotal;
			
			prodVendus[sizeV].d.day =dt->tm_mday ;
			prodVendus[sizeV].d.month =dt->tm_mon+1 ;
			prodVendus[sizeV].d.year =dt->tm_year+1900 ;
			
			
			sizeV++;
			somQuantite += quantite;
            }
            else
            {
                printf("quantite insuffisante\n");
            }
            break;
        }
        else{
            count++;//code existe ou pas
        }
    }
    if(count==np){
                printf("produit introuvable\n");
    }
}
  void statistique(){
  	time_t tt = time(NULL);
  	struct tm* dt = localtime(&tt);
  	int jour = dt->tm_mday;
  	int mois = dt->tm_mon;
  	int annee = dt->tm_year;
	float prixT = 0 , moyenne = 0 ;
	
	int i =0;
   	float max =prodVendus[0].prixTTC , min = prodVendus[0].prixTTC;

    for(i=0;i<sizeV ;i++)
    {
        if(prodVendus[i].d.day==jour&&prodVendus[i].d.month==mois&&prodVendus[i].d.year==annee)
        {
            prixT += prodVendus[i].somPrixTotal ; 
        }
    }

            moyenne = prixT/somQuantite ;

            for(i=0;i<sizeV;i++)
            {
                if(prodVendus[i].prixTTC > max)
                max = prodVendus[i].prixTTC;
            }

            for(i=0;i<sizeV;i++)
            {
                if(prodVendus[i].prixTTC < min )
                min = prodVendus[i].prixTTC;
            }


            printf("Afficher le total des prix des produits vendus en journee courante est = %.2f\n",prixT);
            printf("Afficher la moyenne des prix des produits vendus en journee courante est = %.2f\n",moyenne);
            printf("Afficher le Max des prix des produits vendus en journee courante = %.2f\n",max);
            printf("Afficher le Min des prix des produits vendus en journee courante est = %.2f\n",min);
	
	

  	
  	
  }     
  

void menu(){
	printf("\n**************************************\n");
    printf("[1]-ajouter un nouveau produit\n");
    printf("[2]-ajouter plusieurs produits\n");
    printf("[3]-afficher un produit\n");
    printf("[4]-tri par alphabet\n");
    printf("[5]-tri par prix\n");
    printf("[6]-rechercheparcode\n");
    printf("[7]-rechercheparquantite\n");
    printf("[8]-supprimer\n");
    printf("[9]-acheterProduit\n");
    printf("[10]-alimenterStock\n");
    printf("[11]-etat_stock\n");
    printf("[12]-statistique\n");
    printf("\n***********************************\n");
    
}

int main(){
    int choix;
    debut:
    menu();
    printf("entrer votre choix:");
    scanf("%d", &choix);
    switch(choix){
        case 1: 
        printf("ajouter un nouveau produit:");
        ajouterproduit();
        goto debut;
        case 2: 
        printf("ajouter plusieurs produits:");
        ajouterPlusieurProduit();
        goto debut;
        case 3: 
        printf("afficher produit:");
        afficher();
        goto debut;
        case 4: 
        printf("tri par alphabet:");
        alphabetcroissant();
        goto debut;
        case 5: 
        printf("tri par prix:");
        prixdecroissant();
        goto debut;
        case 6: 
        printf("recherche:");
        Frecherchecode();
        goto debut;
        case 7:
        printf("recherche par quantite");
        Frecherchequantite();
        goto debut;
        case 8: Fsupprimer();
        goto debut;
        case 9: 
        afficher();
		acheterProduit();
		afficher();
        
        goto debut;
        case 10: alimenterStock();
        goto debut;
        case 11: etat_stock();
        goto debut;
        case 12: statistique();
        goto debut;
        //case 7: 
        //printf("acheter");
        //acheterProduit();
        //goto debut;
    }
    

}
