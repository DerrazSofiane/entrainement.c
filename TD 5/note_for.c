#include<stdio.h>
int main()
{   
    int N,compt;
    float sum,x,M;
    char rep;
    
  do{
    sum=0;
    compt=1;
    
    printf("\nDonner le nombre de notes :");
    scanf("%d",&N);
    while(N<=0){ printf("\nErreur d'entree !");
                 printf("\nEntrer le nombre correcte :");
                 scanf("%d",&N);
                }
    for(compt=1;compt<=N;compt=compt+1)
       {
          do{  
            printf("\nDonner le note de N%d :",compt);
            scanf("%f",&x);
            if(x>20 || x<0){printf("\nErreur d'entree !");}
            }while(x>20 || x<0);
            
            sum=sum+x;
        }
        
    M=sum/(float)N;
    printf("\nLa moyenne est : %.2f",M);
    printf("\nVoulez vous recommencer ? (o/n) ");
    fflush(stdin);
    rep=getchar();
     }
    while (rep=='o' || rep=='O');
    system("pause");
    return 0;
}
