#include<stdio.h>
int main()
{
char O,D,N,choix;
float pdv,com;
    printf("Selectionner l'offre :\n");
    printf("N : Pour une voiture neuve, tapez n\n");
    printf("O : Pour une voiture d'occasion, tapez c\n");
    printf("D : Pour des pieces detachees, tapez D\n");
printf("Votre choix ?");
scanf("%c", &choix);

printf("Indiquer le prix de vente : \n");
scanf("%f",&pdv);
	 
switch(choix)
{
	case 'n': com=pdv*3/100;
	 		if(com>500)
	 		{
	 		    com=500;
			}
			 printf("Votre commission est de : %.2f euros \n",com);
			 break;
			 
	case 'o': com=pdv*5/100;
			 if(com<50);
			 {
			 	com=50;
			 }
			 printf("Votre commission est de : %.2f euros \n",com);
			 break;
			 
	case 'D': com=pdv*6/100;
			 printf("Votre commission est de : %.2f euros \n",com);
			 break;
	default : printf("Vous ne touchez pas de commission ?\n");
}
system("pause");
}
