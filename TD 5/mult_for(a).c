#include<stdio.h>
int main()
{
    int compt,p;
    char rep;
    do{ 
        
        for (compt=1;compt<=10;compt=compt+1)
        {p=7*compt;
        printf("%d=7*%d\n",p,compt);}
        printf("Voulez vous recommencer ?(o/n)\n");
        fflush(stdin);
        rep=getchar();
        
      } while (rep=='O' || rep=='o');
    
    system ("pause");
    return 0;
}
