#include<stdio.h>

int main()
{
    float a, b,c;
    printf("Entrer la valeur de a : ");
    scanf("%f",&a);
    printf("Entrer la valeur de b : ");
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    printf("\n" "La nouvelle valeur de a est : %.f",a);
    printf("\n" "La nouvelle valeur de b est : %.f" "\n",b);
    printf("\n");
    system("pause");
    return 0;
}
