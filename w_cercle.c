#include<stdio.h>
#include<math.h>

int main(void)
{ float r, P, S;
  char rep;
  
  do{
        printf("Entrer le rayon superieur a 0 : ");
        fflush(stdin);
        scanf("%f",&r);
        
         while (r<0 || r>50)
         { printf("\nErreur d'entree !");
           printf("\nEntrer la valeur de rayon correcte : ");
           fflush(stdin);
           scanf("%f",&r);
        }
    P=2*M_PI*r;
    S=M_PI*r*r;
    printf("\nLe perimetre du cercle de rayon %.4f m vaut %.4f m \n",r,P);
    
  printf("\nVoulez vous recommencer ? (o\n) ");
  fflush(stdin);
  rep=getchar();
   }
  while (rep=='o'||rep=='O');
  system("pause");
}
