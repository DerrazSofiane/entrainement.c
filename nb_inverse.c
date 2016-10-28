#include<stdio.h>
int main () 
{float inv;
int nb;

printf("Taper un chiffre : \n");
scanf ("%d",&nb);
if(nb>0){
    inv=(float)1/nb;
    printf("Le nombre taper au clavier est : %d \n",nb);
    printf("1/%d est egale a : %.3f n,", nb, inv);
}
else {printf("Calcul impossible, vous avez rentre 0, \n");
}
system("pause");
}
