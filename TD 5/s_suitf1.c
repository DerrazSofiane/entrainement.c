#include<stdio.h>
int main()
{
    int n,compt,sum;
    char rep;
    
    do{ 
        compt=1;
        sum=0;
        printf("Donner la valeur finale n :\n");
        
        scanf("%d",&n);
        
        while(n<=0){
                    printf("Erreur!\n");
                    printf("Donner la valeur finale n :\n");
                    scanf("%d",&n);
                    }
        for (compt=1;compt<=n;compt=compt+1)
        {sum=sum+compt;}
        
        printf("La somme: %d\n",sum);
        
        printf("Voulez vous recommencer ?(o/n)\n");
        fflush(stdin);
        rep=getchar();
        
      } while (rep=='O' || rep=='o');
    
    system ("pause");
    return 0;
}
