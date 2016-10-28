#include<stdio.h>
#include<math.h>

int main()
{   
    float r,P,S;
    char rep;
    
    do{
        printf("\nEntrer le rayon superieur a 0 : ");
        scanf("%f",&r);
        
        while(r<0)
        {printf("\nErreur d'entree !");
         printf("\nEntrer le rayon correcte :");
         scanf("%f",&r);
        }
        
        P=2*M_PI*r;
        S=M_PI*r*r;
        printf("\nLe permetre du cercle de rayon %.4f m vaut %.4f m \n",r,P);
        printf("La surface du cercle de rayon %.4f m vaut %.4f m2\n",r,S);
        
        
      printf("\nVoulez vous recommencer ? (o/n) ");
      fflush(stdin);
      rep=getchar();
     }
    while (rep=='o' || rep=='O');
    
    system("pause");
    return 0;
}
