#include<stdio.h>
int main()
{   
    int J,M,An;
    char rep;
  do{
    printf("Donner la valeur du jour:");
    scanf("%d",&J);
    printf("Donner la valeur du mois:");
    scanf("%d",&M);
    printf("Donner la valeur de l'anne:");
    scanf("%d",&An);
    
    while(An!=2017){printf("\nErreur d'entree (anne)!");
                    printf("Donner la valeur de l'anne:");
                    scanf("%d",&An);
                   }
    while(M<1 || M>12){printf("\nErreur d'entree (mois)!");
                       printf("Donner la valeur du mois:");
                       scanf("%d",&M);
                      }
    if(M==2){while(J<1 || J>28){printf("\nErreur d'entree (jour)!");
                                printf("Donner la valeur du jour:");
                                scanf("%d",&J);};
                                printf("\n%d/%d/%d",J,M,An);
                                
             }else{ if (M==4 || M==6 || M==9 || M==11){ while(J<1 || J>30){printf("\nErreur d'entree (jour)!");
                                                                           printf("Donner la valeur du jour:");
                                                                           scanf("%d",&J);};
                                                                           printf("\n%d/%d/%d",J,M,An);
                                                                         //}
                                                       }else{while(J<1 || J>31){printf("\nErreur d'entree (jour)!");
                                                                                printf("Donner la valeur du jour:");
                                                                                scanf("%d",&J);};
                                                                                printf("\n%d/%d/%d",J,M,An);
                                                                             //}
                                                             }
                  }
    
    
    
    
    
    printf("\nVoulez vous recommencer ? (o/n) ");
    fflush(stdin);
    rep=getchar();
    }
    while (rep=='o' || rep=='O');
    system("pause");
    return 0;
}
    
    
    
     
