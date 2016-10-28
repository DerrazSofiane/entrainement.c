#include<stdio.h>
int main()
{
    float prod,sum,n,M;
    int compt;
    char rep;
    
  do{ 
    prod=1;
    compt=0;
    sum=0;
    
    
    
    
    for (compt=0;compt<4;compt=compt+1)
    {
    printf("Donner le chiffre(de 1 a 10):\n");
    scanf("%f",&n);
    
    while(n<1 || n>10){printf("Erreur!\a\n");
                       printf("Donner le chiffre(de 1 a 10):\n");
                       scanf("%f",&n);
                       }
    sum=sum+n;
    prod=prod*n;
    
    }
    
    
    
    M=sum/4;
    printf("La somme:%.1f\n",sum);
    printf("Le produit:%.1f\n",prod);
    printf("La moyenne:%.1f\n",M);
    printf("Voulez vous recommencer ?(o/n)\n");
    fflush(stdin);
    rep=getchar();
   } 
    while(rep=='O' || rep=='o');
    
    system("pause");
    return 0;
}
