#include<stdio.h>

int main ()
{ 
    int a,b;
    printf ("Entrer a : ");
    scanf("%d",&a);
    printf("Entrer b : ");
    scanf("%d",&b);

    if(a==b) 
    { 
        printf("a et b sont egaux \n");
    }
    else 
    {
        if (a>b)
        {
            printf("Le max est a=%d \n",a);
            printf("Le min est b=%d \n",b);
        }
        else 
        {
            if (b>a)
            printf("Le max est b=%d \n",b);
            printf("Le min est a=%d \n",a);
        }
    }
    system("pause");
}
