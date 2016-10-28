#include<stdio.h>
int main () {
    int nb,somme,cpteur;
    float moy,note,inf,max,min;
    char rep;
    
    do{
        printf("donner le nombre d'etudiant?\n");
        scanf("%d",&nb);
        inf=0; somme=0; cpteur=0; max=0; min=20;
        do{
            cpteur=cpteur+1;
            do{
            printf("donner la note de l'etudiant N %d\n",cpteur);
            scanf("%f",&note);
            if(note<0 || note>20) printf("ERROR\n");
         }
        while(note<0 || note>20);
            somme=somme+note;
        if(note<10){
        inf=inf+1;
        }
       if(note>max){
        max=note;
        }
       if(note<min){
        min=note;
        }
    }
    while(cpteur<nb);
    moy=somme/nb;
    printf("les notes inferieur a 10 sont de %.2f \n",inf);
    printf("\n\n la note minimale est de %.2f\n",min);
     printf("\n\n la note maximale est de %.2f\n",max);
      printf("\n\n la moyenne est de %.2f\n",moy);
      printf("voulez vous recommencer (o/n)\n");
      fflush(stdin);
      rep=getchar();
    }
    while(rep=='o'||rep=='O');
    system("pause");
}
      
    
        
        
            
        
    
