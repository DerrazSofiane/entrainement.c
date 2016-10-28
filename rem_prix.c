#include<stdio.h>
int main()
{float prix, rem;

printf("Taper le prix de ou des achats");
scanf("%f",&prix);
if(prix>=200){rem=prix*10/100;
prix=prix-rem;
printf("La remise qui vous est accordée : %.2f euros \n",rem);
printf("Le prix avec remise : %.2f euros \n", prix);
}
else {printf("Desole, pas de remise, prix : %.2f euros \n", prix);
}
system("pause");
}
