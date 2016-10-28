#include<stdio.h>
int main () {
float s,md,mr;
char x,rep;
do{
    s=100;
    printf("votre solde est de %.2f euros\n\n",s);
    do{
    printf("voulez vous faire un depot (D ou d) ou un retrait (r ou R)\n");
    fflush(stdin);
    x=getchar();
      }
      while(x!='d'&&x!='D'&&x!='r'&&x!='R');
      if(x=='d'||x=='D'){
            printf("quel est le montant a deposer \n");
            scanf("%f",&md);
            s=s+md;
            printf("votre solde est maintenant de %.2f euros \n\n",s);
        }
        else{
            do{
            printf("quel est le montant a retirer \n");
            scanf("%f",&mr);
        if(s<mr) printf(" vous ne pouvez pas retirer cet argent\n");
            }
        while (s<mr);
            s=s-mr;
            if(s<0){ printf ("vous etes a decouverte de %.2f\n",s);
                  }
            
           else { printf(" votre solde est maintenent de %.2f euros\n\n",s);
                }  
            }
            printf("voulez vous effectuer une nouvelle operation\n");
            fflush(stdin);
            rep=getchar();
    while(rep=='o'||rep=='O');
    system("pause");
}          
    
    
