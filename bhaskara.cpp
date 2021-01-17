#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(void){

	float x1, x2, rq;
	int a, b, c, b2, bn, delta, repet;
	
	printf(" Bem vindo ao Bhaskaramatic \n \n");
	printf(" Digite o a da equacao: \n");
	printf(" ");
	scanf(" %d", &a);
	printf(" Digite o b da equacao: \n");
	printf(" ");
	scanf(" %d", &b);
	printf(" Digite o c da equacao: \n");
	printf(" ");
	scanf(" %d", &c);

	
	b2 = b * b;
	delta = b2 -4 * a * c;
	rq = sqrt(delta);
	bn = b * -1;
	
	printf("\n");
	printf(" Delta = %d -4", b2);
	printf(" * %d", a);
	printf(" * %d \n", c);

	printf(" Delta = %d \n \n", delta);
	
	if(delta < 0)
	{
		printf(" x nao pertence a reais \n \n");
	}
	else{
			
	x1 = (bn + rq) / (2 * a); 
	x2 = (bn - rq) / (2 * a); 	
	
	printf(" x1 = %d +", bn);
	printf(" %.2f / ", rq);
	printf(" (2 * %d) \n", a);
	printf(" x1 = %.2f \n\n", x1);		
	
	printf(" x2 = %d -", bn);
	printf(" %.2f / ", rq);
	printf(" (2 * %d) \n", a);
	printf(" x2 = %.2f \n \n", x2);}	
	
	system("pause");

	
	while(delta == delta){
	
	system("cls");
		
	float x1, x2, rq;
	int a, b, c, b2, bn, delta;
	
	printf(" Bem vindo ao Bhaskaramatic \n \n");
	printf(" Digite o a da equacao: \n");
	printf(" ");
	scanf(" %d", &a);
	printf(" Digite o b da equacao: \n");
	printf(" ");
	scanf(" %d", &b);
	printf(" Digite o c da equacao: \n");
	printf(" ");
	scanf(" %d", &c);

	
	b2 = b * b;
	delta = b2 -4 * a * c;
	rq = sqrt(delta);
	bn = b * -1;
	
	printf("\n");
	printf(" Delta = %d -4", b2);
	printf(" * %d", a);
	printf(" * %d \n", c);

	printf(" Delta = %d \n \n", delta);
	
	if(delta < 0)
	{
		printf(" x nao pertence a reais \n \n");
	}
	else{
			
	x1 = (bn + rq) / (2 * a); 
	x2 = (bn - rq) / (2 * a); 	
	
	printf(" x1 = %d + ", bn);
	printf(" %.2f / ", rq);
	printf(" (2 * %d) \n", a);
	printf(" x1 = %.2f \n\n", x1);		
	
	printf(" x2 = %d - ", bn);
	printf(" %.2f / ", rq);
	printf(" (2 * %d) \n", a);
	printf(" x2 = %.2f \n \n ", x2);}
	
	system("pause");
	}

	return 0;
}
