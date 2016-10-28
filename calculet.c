#include<stdio.h>
int main()

{ float a,b,c;
  char choix;
    printf("Menu : \n\n");
        printf("Pour multiplier taper * \n");
        printf("Pour diviser taper / \n");
        printf("Pour additionner taper +  \n");
        printf("Pour soustraire taper - \n");
        
    choix=getchar();
        printf("Entrer un premier reel a=? \n");
         scanf("%f",&a);
        printf("Entrer deuxieme reel b=? \n");
         scanf("%f",&b);
        
switch(choix);
{
        
        case '*': c=a*b;
         printf("Le resultat est %.2f \n");
        break;
        
        
        case '/': c=a/b;
         if(b==0);
          {printf("Error \n");
          }
         else 
         {
               printf("Le resultat est %.2f \n",c);
         }  
        break;
        
        
        case '+' : c=a+b;
         printf("Le resultat est %.2f \n",c);
        break;
        
        
        case '-' : c=a-b
         printf("Le resultat est %.2f \n",c);
        break;
        

}

system("pause");
}
    
