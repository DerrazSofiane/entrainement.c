#include<stdio.h>
#include<stdlib.h>
int main()

{   int n, x, compt;
    char rep;
    char y;
    srand(time(NULL));
do{  
     compt=0;
     printf("Entrer un entier n compris entre 0 et 255 :");
     fflush(stdin);
     y=getchar();
     scanf("%d",&n);
     x=rand()%256;
     
     if(y>=58 || y<=126)
     {printf("Le caractere n'est pas un chiffre\n");}
       
       while (n<0 || n>255)
       {printf("Erreur!\n");
        printf("\nEntrer une nouvelle valeur de n comprise entre 0 et 255 :");
        fflush(stdin);
        scanf("%d",&n);
       }
        
       while (n!=x)
      {if(n<x) {printf("Trop petit ou mauvais caractere, recommencez :");
        fflush(stdin);
        scanf("%d",&n);}
        else {printf("Trop grand ou mauvais caractere, recommencez :");
        fflush(stdin);
        scanf("%d",&n);}
        compt=compt+1;
      }
      
    printf("Bravo, vous avez gagne en %.d coups !\n",compt);
    printf("\nVoulez vous recommencer le programme ? (o/n) ");
    fflush(stdin);
    rep=getchar();
  }
 while (rep=='o'||rep=='O');
}
