#include<stdio.h>
#include<stdlib.h>

int main()
{
    char rep;
    int X,N,compt=0;
    srand(time(NULL));
 do{
    compt=0;  
    X=rand()%255;
   do{
    printf("Donner un entier N (0~255):\n");
    scanf("%d",&N);
    while(N<0 ||N>255)
         { printf("Erreur!\n");
           printf("Donner un entier N (0~255):\n");
           scanf("%d",&N);
         }
    compt=compt+1;
    
      if(X!=N){ if(N>X){printf("Trop grand,recommencez.\n");}
                 else{printf("Trop petit,recommencez.\n");}
              }
     
     } while(X!=N);
    
    printf("Bravo, vous avez gagne en %d coups!\n",compt);
    
    printf("Voulez vous recommencer ?(o/n)\n");
    fflush(stdin);
    rep=getchar();
   } 
    while(rep=='O' || rep=='o');
    
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
