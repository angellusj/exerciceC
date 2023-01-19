#include<stdio.h>

void inverse(int vet[], int n){
	int auxiliar[n];
	int index;
	for(index=0;index<n;index++){
		auxiliar[index]=vet[index];
	}
for(index=0;index<n;index++){
	vet[index]=auxiliar[n-1-index];
}
}
int main(){
	int vetor{1,2,3,4,5};
	inverse(vetor, 5);
	int cont;
	for(cont=0;cont<5;cont++){
		printf("%d \t", vetor[cont]);
	}
}
