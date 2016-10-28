#include<stdio.h>

int main ()
{
char x;
int n;
    
    printf("Donner un caractere:\n");
     x=getchar();
     n=("%d",x);
     
     if(n>=65 && n<=90)
     {
        printf("Le caractere est une majuscule\n");
    }
    else
    {
        if(n>=91 && n<=96)
        {
            printf("Le caractere n'est pas une lettre\n");
        }
        else
        {
            if(n>97 && n<=122)
            {
            printf("Le caractere est une minuscule\n");
            }
            else
            {
                printf("Le caractere n\'est pas une lettre\n");
            }
        }
    }
system("pause");
}            
                  
            
            

          
           
               
                
