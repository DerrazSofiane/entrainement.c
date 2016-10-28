#include<stdio.h>
 int main()
 {
	float pht,tva,valeurtva,prixttc;
	printf("donner le prix hors taxe(euros):");
	scanf("%f",&pht);
	tva=20;
	valeurtva=pht*tva/100;
	prixttc=pht+valeurtva;
	printf(" le prix TTC est: %.2f euros ",prixttc);
	printf(" la TVA: %.2f euros",tva);
	system("pause");
	return 0 ;
}
