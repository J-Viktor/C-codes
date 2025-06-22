#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n=0;
	setlocale(LC_ALL,"portuguese");
	printf("Seja bem-vindo á minha calculadora");
	printf("\nescolha a operação matemática desejada e aperte 'Enter'");
	printf("\n1-soma");
	printf("\n2-subtração");
	printf("\n3-multiplicação");
	printf("\n4-divisão");
	printf("\n5-potência");
	printf("\n6-raiz quadrada");
	printf("\n7-média");
	printf("\n");
	scanf("%i",&n);
	if(n==1){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois números a serem somados");
		printf("\nnúmero 1: ");
		scanf("%f",&n1);
		printf("\nnúmero 2: ");
		scanf("%f",&n2);
		r=n1+n2;
		printf("\nA soma dos números escolhidos é:%.2f",r);
	}else if(n==2){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois números a serem subtraídos");
		printf("\nnúmero 1: ");
		scanf("%f",&n1);
		printf("\nnúmero 2: ");
		scanf("%f",&n2);
		r=n1-n2;
		printf("\nA subtração dos números escolhidos é:%.2f",r);
	}else if(n==3){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois números a serem multiplicados");
		printf("\nnúmero 1: ");
		scanf("%f",&n1);
		printf("\nnúmero 2: ");
		scanf("%f",&n2);
		r=n1*n2;
		printf("\nO produto dos números escolhidos é:%.2f",r);
	}else if(n==4){
		float n1=0,n2=0,r=0;
		printf("\nselecione os dois números a serem divididos");
		printf("\nnúmero 1: ");
		scanf("%f",&n1);
		printf("\nnúmero 2: ");
		scanf("%f",&n2);
		r=n1/n2;
		printf("\nO resultado da divisão é:%.2f",r);
	}else if(n==5){
		float n1=0,n2=0,r=0;
		printf("\nPrimeiro escolha a base e depois o expoente");
		printf("\nBase: ");
		scanf("%f",&n1);
		printf("\nExpoente: ");
		scanf("%f",&n2);
		r=pow(n1,n2);
		printf("\nO resultado da potência é:%.2f",r);
	}else if(n==6){
		float n1=0,r=0;
		printf("\nSelecione o número que você deseja descobrir a raiz quadrada");
		printf("\nApenas números inteiros");
		printf("\nnúmero : ");
		scanf("%f",&n1);
		r=sqrt(n1);
		printf("\nA raiz de %.0f é:%.2f",n1,r);
	}else if(n==7){
		int i=0,p=0,z=0;
		float s=0,m=0,r=0;
		printf("\nEscolha quantos números você quer fazer a média");
		printf("\nEu quero fazer a média com quantos números?: ");
		scanf("%i",&i);
		for(int z=1;z<=i;z++){
			p++;
			printf("\nNúmero %i",p);
			printf("\n");
			scanf("%f",&m);
			s=s+m;
			r=s/i;
		}printf("\nA média dos números selecionados é:%.2f",r);
	}else if(n>7){
		printf("\nEscolha um dos números citados por favor");
	} 
}
