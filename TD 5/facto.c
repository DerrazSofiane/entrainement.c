#include<stdio.h>
int main()
{
    int n,compt,f;
    char rep;
    do{ 
        compt=1;
        f=1;
        printf("Donner la valeur finale n :\n");
        
        scanf("%d",&n);
        
        while(n<0){
                    printf("Erreur!\n");
                    printf("Donner la valeur finale n :\n");
                    scanf("%d",&n);
                    }
        if(n!=0){ for (compt=1;compt<=n;compt=compt+1)
                       {f=f*compt;};
                       printf("f=%d\n",f);
                }else{printf("f=1\n");}
                
        printf("Voulez vous recommencer ?(o/n)\n");
        fflush(stdin);
        rep=getchar();
        
      } while (rep=='O' || rep=='o');
    
    system ("pause");
    return 0;
}
