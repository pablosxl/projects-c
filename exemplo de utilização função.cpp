#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<ctype.h>
#include<conio.h>
float media_par_impar(float,float);
float formula(float,float,float);
void menor_maior(void);
main(){
	setlocale(LC_ALL,"portuguese");
	float n1,n2;
	float a,b,c;
	char op;
	while(op!='s'){
	printf("OP��ES :\n\nA-M�dia\nB-F�rmula\nC-Maior e Menor\nS-Sair\n\n");
	printf("Digite a op��o para mostrar: \n\n");
	op=getch();
	op=tolower(op);
	switch(op){
				case'a': printf("Op��o A: Tirar a m�dia e mostrar se e par ou impar\n\n");
						 printf("Digite o primeiro n�mero: ");
						 scanf("%f",&n1);
						 printf("Digite o segundo n�mero: ");
						 scanf("%f",&n2);
						 media_par_impar(n1,n2);		 
				break;
				case'b': printf("Op��o B: Mostrar o Resultado da Formula\n\n");
						 printf("Digite o valor de A: ");
						 scanf("%f",&a);
						 if(a>0&&a<=3){
						 printf("Digite o valor de B: ");
						 scanf("%f",&b);
						 printf("Digite o valor de C: ");
						 scanf("%f",&c);
						 formula(a,b,c);
						 }
						  else printf("O valor A � menor que 1 ou maior que 3");
				break;
				case'c': printf("Op��o C: Mostrar o maior e o menor entre 10 n�meros digitados\n\n");
						 menor_maior();
				break;
				case's': printf("Sair");
				break;
				default: printf("Op��o inv�lida,digite outra op��o!");	
			  	}
	printf("\n\n");
	system("pause");
	system("cls");
					}
}
float media_par_impar(float n1,float n2)
{
	int media;
	media=(n1+n2)/2;
	printf("Media=%d ",media);
	if(media%2==0) printf("Par");
	else printf("Impar");
		
}
float formula(float a,float b,float c)
{	
	float r;	
	r=((pow(b,a))*c-b)/a;
	printf("R=%.2f",r);
}
void menor_maior(void)
{
	int maior=-9999,menor=9999;
	int cont=0,n;
	while(cont<15){
		cont++;
		printf("%d.Digite um numero: ",cont);
		scanf("%d",&n);
		if(n>maior) maior=n;
		if(n<menor) menor=n;
					}
		printf("\nMaior: %d\nMenor: %d",maior,menor);
	
}
