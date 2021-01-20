//Lee 10 numeros y di el mayor
#include<stdio.h>
int main(){
	int numero[10];
	int mayor;
	int cont;
	for(cont=0;cont<10;cont++){
		printf("\nNumero %d: ",cont);
		scanf("%d",&numero[cont]);
	}
	printf("La lista");
	for(cont=0;cont<10;cont++){
		printf("\nNumero %d: %d",cont,numero[cont]);
	}
	return 0;
}
