#include<stdio.h>
#include<math.h>
int main()
{float r, Per, Surf;
 printf("Etnrer le rayon du cercle : ");
 scanf("%f",&r);
 Per=2*M_PI*r;
 Surf=M_PI*pow(r,2);
 printf("\n" "Le perimetre du cercle est : %f" "\n",Per);
 printf("La surface du cercle est : %f" "\n" "\n",Surf);
 system("pause");
 return 0 ;
}
