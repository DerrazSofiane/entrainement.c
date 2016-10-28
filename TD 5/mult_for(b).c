#include<stdio.h>
int main()
{
    int N,compt,p;
    char rep;
    do{ 
        printf("Donner la valeur entiere N :\n");
        scanf("%d",&N);
        while(N<1 || N>100){
                    printf("Erreur!\n");
                    printf("Donner la valeur entiere N :\n");
                    scanf("%d",&N);
                    }
    for (compt=1;compt<=10;compt=compt+1)
    {p=N*compt;
     printf("%d=%d*%d\n",p,N,compt);}
     printf("Voulez vous recommencer ?(o/n)\n");
        fflush(stdin);
        rep=getchar();
        
      } while (rep=='O' || rep=='o');
    
    system ("pause");
    return 0;
}
