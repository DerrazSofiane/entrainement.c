#include <stdio.h>
int main ()
{
    float r=10, Per, Surf;
    printf("Ce programme calcule le perimetre et la surface d'un cercle. \n");
    Per=2*3.14*r;
    Surf=3.14*r*r;
    
    printf("le perimetre du cercle de rayon %f est %.3f \n",r,Per);
    printf("La surface du cercle de rayon %d est %.1f \n",r,Surf);
    
    printf("Fin du programme.");
    system(" pause ");
}
