#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n=0;
	setlocale(LC_ALL,"portuguese");
	printf("Seja bem-vindo � minha calculadora");
	printf("\nescolha a opera��o matem�tica desejada e aperte 'Enter'");
	printf("\n1-soma");
	printf("\n2-subtra��o");
	printf("\n3-multiplica��o");
	printf("\n4-divis�o");
	printf("\n5-pot�ncia");
	printf("\n6-raiz quadrada");
	printf("\n7-m�dia");
	printf("\n");
	scanf("%i",&n);
	if(n==1){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois n�meros a serem somados");
		printf("\nn�mero 1: ");
		scanf("%f",&n1);
		printf("\nn�mero 2: ");
		scanf("%f",&n2);
		r=n1+n2;
		printf("\nA soma dos n�meros escolhidos �:%.2f",r);
	}else if(n==2){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois n�meros a serem subtra�dos");
		printf("\nn�mero 1: ");
		scanf("%f",&n1);
		printf("\nn�mero 2: ");
		scanf("%f",&n2);
		r=n1-n2;
		printf("\nA subtra��o dos n�meros escolhidos �:%.2f",r);
	}else if(n==3){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois n�meros a serem multiplicados");
		printf("\nn�mero 1: ");
		scanf("%f",&n1);
		printf("\nn�mero 2: ");
		scanf("%f",&n2);
		r=n1*n2;
		printf("\nO produto dos n�meros escolhidos �:%.2f",r);
	}else if(n==4){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois n�meros a serem divididos");
		printf("\nn�mero 1: ");
		scanf("%f",&n1);
		printf("\nn�mero 2: ");
		scanf("%f",&n2);
		r=n1/n2;
		printf("\nO resultado da divis�o �:%.2f",r);
	}else if(n==5){
		float n1=0,n2=0,r=0;
		printf("\nPrimeiro escolha a base e depois o expoente");
		printf("\nBase: ");
		scanf("%f",&n1);
		printf("\nExpoente: ");
		scanf("%f",&n2);
		r=pow(n1,n2);
		printf("\nO resultado da pot�ncia �:%.2f",r);
	}else if(n==6){
		float n1=0,r=0;
		printf("\nSelecione o n�mero que voc� deseja descobrir a raiz quadrada");
		printf("\nApenas n�meros inteiros");
		printf("\nn�mero : ");
		scanf("%f",&n1);
		r=sqrt(n1);
		printf("\nA raiz de %.0f �:%.2f",n1,r);
	}else if(n==7){
		int i=0,p=0,z=0;
		float s=0,m=0,r=0;
		printf("\nEscolha quantos n�meros voc� quer fazer a m�dia");
		printf("\nEu quero fazer a m�dia com quantos n�meros?: ");
		scanf("%i",&i);
		for(int z=1;z<=i;z++){
			p++;
			printf("\nN�mero %i",p);
			printf("\n");
			scanf("%f",&m);
			s=s+m;
			r=s/i;
		}printf("\nA m�dia dos n�meros selecionados �:%.2f",r);
	}else if(n>7){
		printf("\nEscolha um dos n�meros citados por favor");
	} 
}
